@class NSString;

@interface QLPreviewProvider : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)beginRequestWithExtensionContext:(id)a0;
- (void)providePreviewForFileRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
