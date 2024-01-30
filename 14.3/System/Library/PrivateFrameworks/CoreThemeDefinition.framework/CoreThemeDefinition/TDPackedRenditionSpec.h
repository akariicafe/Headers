@class TDThemeCompressionType;

@interface TDPackedRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDThemeCompressionType *compressionType;

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (id)renditionPackName;

@end
