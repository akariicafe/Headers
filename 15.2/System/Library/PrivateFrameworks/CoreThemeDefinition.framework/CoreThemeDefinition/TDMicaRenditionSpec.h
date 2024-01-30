@class NSString;

@interface TDMicaRenditionSpec : TDRenditionSpec

@property (copy, nonatomic) NSString *layerPath;
@property (nonatomic) BOOL isTintable;

- (void)_logError:(id)a0;
- (id)debugDescription;
- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)copyAttributesInto:(id)a0;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;
- (void)_logWarning:(id)a0;
- (void)_logExtra:(id)a0;

@end
