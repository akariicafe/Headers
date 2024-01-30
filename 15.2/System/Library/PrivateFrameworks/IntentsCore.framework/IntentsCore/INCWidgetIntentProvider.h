@interface INCWidgetIntentProvider : NSObject

+ (void)initialize;

- (void)provideIntentWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (id)intentsExtensionForExtension:(id)a0 compatibleWithIntent:(id)a1 error:(id *)a2;

@end
