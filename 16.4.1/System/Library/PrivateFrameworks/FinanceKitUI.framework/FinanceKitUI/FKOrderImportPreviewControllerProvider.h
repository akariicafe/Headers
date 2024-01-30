@interface FKOrderImportPreviewControllerProvider : NSObject

+ (BOOL)canProvidePreviewControllerForMessages;
+ (id)makeViewControllerWithOrderURL:(id)a0 completion:(id /* block */)a1 error:(id *)a2;

@end
