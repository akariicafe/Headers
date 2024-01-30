@interface WebMIMETypeRegistry : NSObject

+ (id)preferredExtensionForMIMEType:(id)a0;
+ (BOOL)isSupportedImageMIMEType:(id)a0;
+ (BOOL)isSupportedMediaMIMEType:(id)a0;
+ (id)mimeTypeForExtension:(id)a0;

@end
