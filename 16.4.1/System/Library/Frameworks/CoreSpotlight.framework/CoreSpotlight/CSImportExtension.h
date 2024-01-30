@class NSString;

@interface CSImportExtension : NSObject <NSExtensionRequestHandling>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)beginRequestWithExtensionContext:(id)a0;
- (BOOL)updateAttributes:(id)a0 forFileAtURL:(id)a1 error:(id *)a2;

@end
