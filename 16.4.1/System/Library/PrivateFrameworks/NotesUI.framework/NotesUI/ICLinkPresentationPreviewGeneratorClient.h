@class NSXPCConnection;

@interface ICLinkPresentationPreviewGeneratorClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })drawPreviewStartingAtPoint:(struct CGPoint { double x0; double x1; })a0 attachment:(id)a1 insideSystemPaper:(BOOL)a2;

@end
