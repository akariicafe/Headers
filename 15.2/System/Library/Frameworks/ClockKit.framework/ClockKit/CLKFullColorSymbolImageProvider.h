@class UIColor, NSString, UIImage, NSNumber;

@interface CLKFullColorSymbolImageProvider : CLKFullColorImageProvider {
    BOOL _finalized;
    NSString *_privateSystemName;
    UIImage *_symbolImage;
}

@property (nonatomic) BOOL ignoreHierarchicalLayers;
@property (retain, nonatomic) UIColor *secondaryTintColor;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSNumber *overridePointSize;
@property (readonly, nonatomic) NSString *systemName;
@property (readonly, nonatomic) NSNumber *pointSize;
@property (readonly, nonatomic) long long weight;

+ (BOOL)supportsSecureCoding;
+ (id)symbolImageProviderWithSystemName:(id)a0;
+ (id)_symbolImageProviderWithSystemName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSystemName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)createSymbolImage;
- (BOOL)prefersFilterOverTransition;
- (void)finalizeWithPointSize:(id)a0 weight:(long long)a1 maxSDKSize:(struct CGSize { double x0; double x1; })a2 maxDeviceSize:(struct CGSize { double x0; double x1; })a3 cornerRadius:(double)a4;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)a0;
- (id)_initWithSystemName:(id)a0;
- (id)initWithJSONObjectRepresentation:(id)a0 bundle:(id)a1;
- (BOOL)_isHierarchicalSymbol;

@end
