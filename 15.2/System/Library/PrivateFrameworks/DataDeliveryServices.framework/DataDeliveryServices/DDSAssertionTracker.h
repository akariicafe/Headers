@class NSMutableDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, DDSAssertionDataHandling, DDSAssetTrackingDelegate;

@interface DDSAssertionTracker : NSObject <DDSAssetTracking>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *trackedAssertions;
@property (readonly, nonatomic) NSMutableDictionary *trackedAssertionSets;
@property (readonly, nonatomic) id<DDSAssertionDataHandling> dataHandler;
@property (retain, nonatomic) id<DDSAssetTrackingDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)assertionIDsForClientID:(id)a0;
- (id)allAssertions;
- (void)didUpdateAssertion:(id)a0 atDate:(id)a1;
- (id)trackedAssetTypes;
- (id)assertionDueForUpdateFrom:(id)a0 SinceDate:(id)a1;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)removeAssertionWithID:(id)a0;
- (void).cxx_destruct;
- (id)initWithDataHandler:(id)a0;
- (id)init;
- (void)resetAssertionDueDates;
- (id)assertionDueForUpdateSinceDate:(id)a0;
- (double)intervalForDownloadFrequency:(long long)a0;

@end
