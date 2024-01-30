@class NSString, NSDictionary, SSURLConnectionRequest, NSObject;
@protocol OS_dispatch_queue;

@interface RadioSyncRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    unsigned long long _globalVersion;
    SSURLConnectionRequest *_request;
    NSDictionary *_responseDictionary;
}

@property (nonatomic) BOOL disableArtworkLoading;
@property (nonatomic) BOOL includeCleanTracksOnly;
@property (nonatomic) BOOL isAutomaticUpdate;
@property (copy, nonatomic) NSString *referer;
@property (readonly, copy, nonatomic) NSDictionary *resultingOverrideBagDictionary;

- (id)responseDictionary;
- (void)startWithCompletionHandler:(id /* block */)a0;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)matchDictionary;
- (id)_sortedChangesByType:(id)a0;
- (id)_stationSortOrderForChanges:(id)a0;
- (id)_updateModel:(id)a0 withChangeDictionary:(id)a1 changeType:(long long *)a2 loadArtworkSynchronously:(BOOL)a3;
- (id)changeList;
- (id)initWithGlobalVersion:(unsigned long long)a0;

@end
