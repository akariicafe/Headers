@interface QLBasePreviewParts : QLPreviewConverterParts

+ (BOOL)canConvertDocumentType:(id)a0;
+ (void /* function */ *)dataCallbackForUTI:(id)a0 andSize:(unsigned long long)a1;
+ (BOOL)isBundleURL:(id)a0;
+ (void /* function */ *)urlCallbackForUTI:(id)a0;

- (void)computePreview;

@end
