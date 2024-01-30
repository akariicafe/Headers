@class WFClient, NSArray;

@interface WFScanProxy : NSObject <WFScanManagerScanProxy>

@property (retain, nonatomic) WFClient *client;
@property (readonly, nonatomic) double scanInterval;
@property (readonly, nonatomic, getter=isScanningAllowed) BOOL scanningAllowed;
@property (readonly, nonatomic) NSArray *scannableChannels;

+ (id)scanProxyWithClient:(id)a0;

- (id)initWithClient:(id)a0;
- (void).cxx_destruct;
- (void)initiateNoNetworksSoftError;
- (BOOL)isChannel6GHzPSC:(id)a0;
- (void)performScanWithRequest:(id)a0 reply:(id /* block */)a1;

@end
