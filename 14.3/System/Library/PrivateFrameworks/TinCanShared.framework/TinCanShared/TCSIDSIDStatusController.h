@class NSArray, IDSBatchIDQueryController, NSMutableDictionary, NSString, NSNumber, NSObject;
@protocol TUIDSLookup, OS_dispatch_source, TCSIDSIDStatusControllerDelegate;

@interface TCSIDSIDStatusController : NSObject <IDSBatchIDQueryControllerDelegate> {
    NSObject<OS_dispatch_source> *_timer;
    double _timeout;
}

@property (retain, nonatomic) IDSBatchIDQueryController *queryController;
@property (readonly, nonatomic) NSArray *destinations;
@property (readonly, nonatomic) NSMutableDictionary *destinationToStatus;
@property (readonly, nonatomic) id<TUIDSLookup> item;
@property (readonly, nonatomic) NSNumber *status;
@property (readonly, nonatomic) NSString *tinCanHandle;
@property (readonly, weak, nonatomic) id<TCSIDSIDStatusControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForDestinationToStatus:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)execute;
- (void)batchQueryController:(id)a0 updatedDestinationsStatus:(id)a1 onService:(id)a2 error:(id)a3;
- (void)_statusQueryTimedOut;
- (id)initWithItem:(id)a0 delegate:(id)a1 timeout:(double)a2;

@end
