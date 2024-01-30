@class UIColor, NSNumber, NSString;

@interface CLKSymbolImageProvider : CLKImageProvider {
    BOOL _finalized;
    NSString *_privateSystemName;
    BOOL _hierarchicalSymbol;
}

@property (nonatomic) BOOL ignoreHierarchicalLayers;
@property (retain, nonatomic) UIColor *secondaryTintColor;
@property (readonly, nonatomic) BOOL isTwoPiece;
@property (retain, nonatomic) NSNumber *overridePointSize;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSNumber *pointSize;
@property (readonly, nonatomic) long long weight;

+ (BOOL)supportsSecureCoding;
+ (id)_symbolImageProviderWithSystemName:(id)a0;
+ (id)symbolImageProviderWithSystemName:(id)a0;

- (id)_configuration;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSystemName:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)createSymbolImageForType:(long long)a0 color:(id)a1;
- (id)createSymbolImage;
- (void)finalizeWithPointSize:(id)a0 weight:(long long)a1 maxSDKSize:(struct CGSize { double x0; double x1; })a2 maxDeviceSize:(struct CGSize { double x0; double x1; })a3 maskToCircle:(BOOL)a4;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)_createSymbolImageWithConfiguration:(id)a0;
- (id)_createSymbolImageWithForeground:(id)a0 background:(id)a1;
- (id)_initWithSystemName:(id)a0;
- (void)finalizeWithPointSize:(id)a0 weight:(long long)a1 maxSDKSize:(struct CGSize { double x0; double x1; })a2 maxDeviceSize:(struct CGSize { double x0; double x1; })a3 cornerRadius:(double)a4;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;

@end
