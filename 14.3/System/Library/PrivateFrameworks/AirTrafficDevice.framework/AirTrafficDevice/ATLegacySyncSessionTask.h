@class NSString, NSObject;
@protocol ATClient, OS_dispatch_queue;

@interface ATLegacySyncSessionTask : ATSessionTask {
    id<ATClient> _client;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSString *dataClass;
@property (nonatomic) unsigned int grappaSessionID;

- (void)cancel;
- (void).cxx_destruct;
- (id)sessionGroupingKey;
- (id)initWithDataClass:(id)a0;
- (void)start;
- (void)_finishWithError:(id)a0 shouldAddAssetTask:(BOOL)a1;
- (void)prepareWithHostAnchor:(id)a0 version:(id)a1;
- (void)reconcileWithAnchor:(id)a0 syncType:(unsigned int)a1;

@end
