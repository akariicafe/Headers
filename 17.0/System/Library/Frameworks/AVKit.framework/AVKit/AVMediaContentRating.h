@class NSString, UIImage;

@interface AVMediaContentRating : NSObject

@property (nonatomic, getter=isRestricted, setter=_setRestricted:) BOOL restricted;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic, getter=isImageMask) BOOL imageMask;
@property (readonly, nonatomic) long long rank;
@property (readonly, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) long long domain;

+ (id)contentRestrictionsCountryCode;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isCurrentlyRestricted;
- (id)initWithRating:(id)a0 rank:(long long)a1 countryCode:(id)a2 domain:(long long)a3;
- (BOOL)isEqualToMediaContentRating:(id)a0;

@end
