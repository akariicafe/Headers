@class NSXPCConnection;

@interface ICLinkPresentationPreviewGeneratorClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (struct CGSize { double x0; double x1; })drawPreviewStartingAtPoint:(struct CGPoint { double x0; double x1; })a0 attachment:(id)a1 insideSystemPaper:(BOOL)a2;

@end
