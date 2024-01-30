@class NSString, SXDocumentController;

@interface SXDocumentControllerContainer : NSObject <SXDocumentControllerContainer>

@property (readonly, nonatomic) SXDocumentController *documentController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)registerDocumentController:(id)a0;

@end
