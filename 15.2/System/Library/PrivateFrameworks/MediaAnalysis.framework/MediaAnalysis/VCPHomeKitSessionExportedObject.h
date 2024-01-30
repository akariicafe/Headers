@class VCPHomeKitAnalysisSession;

@interface VCPHomeKitSessionExportedObject : NSObject <VCPHomeKitAnalysisSessionClientProtocol>

@property (weak, nonatomic) VCPHomeKitAnalysisSession *weakSession;

- (void).cxx_destruct;
- (void)processResults:(id)a0 withReply:(id /* block */)a1;

@end
