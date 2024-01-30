@class NSString;

@interface ASCIconOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *imageName;
@property (readonly, copy, nonatomic) NSString *animationName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isIcon;
- (id)initWithImageName:(id)a0 animationName:(id)a1;

@end
