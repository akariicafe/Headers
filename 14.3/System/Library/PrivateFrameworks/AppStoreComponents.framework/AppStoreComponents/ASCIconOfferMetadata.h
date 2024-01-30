@class NSString;

@interface ASCIconOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *animationName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)isIcon;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImageName:(id)a0 animationName:(id)a1;

@end
