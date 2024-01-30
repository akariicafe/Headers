@interface OABDrawable : NSObject

+ (id)readDrawableFromObject:(id)a0 state:(id)a1;
+ (id)readDrawableFromZipPackageData:(const struct CsData { unsigned int x0; char *x1; } *)a0 foundInObject:(id)a1 state:(id)a2;
+ (id)readDrawablesFromContainer:(id)a0 state:(id)a1;
+ (void)setUpXmlDrawingState:(id)a0 withBinaryReaderState:(id)a1 targetDocument:(id)a2 colorMap:(id)a3;

@end
