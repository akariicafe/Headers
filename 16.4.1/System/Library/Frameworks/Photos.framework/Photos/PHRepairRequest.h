@class NSSet, PLProgressFollower, PHAssetResource;
@protocol PHMediaRequestDelegate;

@interface PHRepairRequest : PHMediaRequest {
    id<PHMediaRequestDelegate> _delegate;
    PLProgressFollower *_progressFollower;
}

@property (readonly, nonatomic) PHAssetResource *resource;
@property (readonly, nonatomic) NSSet *errorCodes;

- (void)startRequest;
- (void)dealloc;
- (BOOL)isSynchronous;
- (void).cxx_destruct;
- (id)_sendRepairRequestWithReply:(id /* block */)a0;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 assetResource:(id)a5 errorCodes:(id)a6 delegate:(id)a7;

@end
