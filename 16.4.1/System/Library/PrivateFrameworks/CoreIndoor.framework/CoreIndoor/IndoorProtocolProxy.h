@class NSError, NSString;
@protocol CLIndoorDelegateProtocol;

@interface IndoorProtocolProxy : NSObject <CLIndoorDelegateProtocolInternal, CLIndoorDelegateProtocol>

@property (weak, nonatomic) id<CLIndoorDelegateProtocol> delegate;
@property (readonly, nonatomic) NSError *shutdownReason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)indoorAssetDownloadProgress:(float)a0;
- (void)indoorDidFailWithError:(id)a0;
- (void)indoorDidShutdown:(id)a0;
- (void)indoorDidUpdateToLocation:(id)a0 fromLocation:(id)a1;
- (void)indoorGivesUpWithLocation:(id)a0;
- (void)indoorIsUncertainWithLocation:(id)a0;

@end
