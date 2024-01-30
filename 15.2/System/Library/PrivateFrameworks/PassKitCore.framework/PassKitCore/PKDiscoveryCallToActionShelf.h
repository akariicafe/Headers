@class PKDiscoveryCallToAction;

@interface PKDiscoveryCallToActionShelf : PKDiscoveryShelf

@property (readonly, nonatomic) PKDiscoveryCallToAction *callToAction;
@property (readonly, nonatomic) BOOL useImageAsTitle;

+ (BOOL)supportsSecureCoding;

- (void)setItem:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)localizeWithBundle:(id)a0;
- (id)description;
- (void)localizeWithBundle:(id)a0 table:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;

@end
