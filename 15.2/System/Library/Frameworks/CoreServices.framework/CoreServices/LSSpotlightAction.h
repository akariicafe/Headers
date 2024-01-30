@class NSString;

@interface LSSpotlightAction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *unlocalizedTitle;
@property (readonly, nonatomic) NSString *symbolImageName;

+ (id)new;

- (id)_initWithIdentifier:(id)a0 unlocalizedTitle:(id)a1 symbolImageName:(id)a2;
- (BOOL)isEqualToSpotlightAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
