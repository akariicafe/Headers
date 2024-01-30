@class NSString, UIImage;

@interface PKSharingMessageExtensionViewProperties : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSString *leftTitleText;
@property (retain, nonatomic) NSString *rightTitleText;
@property (retain, nonatomic) UIImage *cardImage;
@property (retain, nonatomic) NSString *fallbackCardImageName;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToSharingMessageExtensionViewProperties:(id)a0;

@end
