@class NSString, ASCScreenshots, ASCTrailers;

@interface ASCLockupFeatureAd : NSObject <ASCLockupFeature>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEditorsChoice;
@property (readonly, nonatomic) float productRating;
@property (readonly, copy, nonatomic) NSString *productRatingBadge;
@property (readonly, copy, nonatomic) NSString *productDescription;
@property (readonly, copy, nonatomic) ASCScreenshots *screenshots;
@property (readonly, copy, nonatomic) ASCTrailers *trailers;
@property (readonly, copy, nonatomic) NSString *developerName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEditorsChoice:(BOOL)a0 productRating:(float)a1 productRatingBadge:(id)a2 productDescription:(id)a3 screenshots:(id)a4 trailers:(id)a5 developerName:(id)a6;

@end
