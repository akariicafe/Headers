@class UIColor, NSString, NSURL;

@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying>

@property (copy, nonatomic) UIColor *fillColor;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *imageTreatment;
@property (copy, nonatomic) NSURL *imageURL;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long userAffinityCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
