@class ASCAdamID, NSString, NSArray, NSSet, ASCTrailers, ASCLockupDisplayContext, ASCArtwork, ASCScreenshots, ASCViewMetrics;
@protocol ASCOffer;

@interface ASCLockup : NSObject <NSSecureCoding, NSCopying, ASCViewModel>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEditorsChoice;
@property (readonly, nonatomic) float productRating;
@property (readonly, copy, nonatomic) NSString *productRatingBadge;
@property (readonly, copy, nonatomic) NSString *productDescription;
@property (readonly, copy, nonatomic) ASCScreenshots *screenshots;
@property (readonly, copy, nonatomic) ASCTrailers *trailers;
@property (readonly, nonatomic) BOOL hasMedia;
@property (readonly, copy, nonatomic) NSString *developerName;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSString *productVariantID;
@property (readonly, copy, nonatomic) NSString *contentProviderTeamID;
@property (readonly, copy, nonatomic) NSSet *signpostTags;
@property (readonly, nonatomic) BOOL requiresSSOEntitlement;
@property (readonly, copy, nonatomic) NSArray *features;
@property (readonly, copy, nonatomic) ASCAdamID *id;
@property (readonly, copy, nonatomic) NSString *kind;
@property (readonly, copy, nonatomic) ASCViewMetrics *metrics;
@property (readonly, copy, nonatomic) ASCArtwork *icon;
@property (readonly, copy, nonatomic) NSString *heading;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *ageRating;
@property (readonly, copy, nonatomic) id<ASCOffer> offer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)lockupWithOffer:(id)a0;
- (id)initWithID:(id)a0 kind:(id)a1 metrics:(id)a2 icon:(id)a3 heading:(id)a4 title:(id)a5 subtitle:(id)a6 ageRating:(id)a7 offer:(id)a8;
- (id)initWithID:(id)a0 kind:(id)a1 icon:(id)a2 heading:(id)a3 title:(id)a4 subtitle:(id)a5 ageRating:(id)a6 offer:(id)a7;
- (id)featureWithClass:(Class)a0;
- (id)initWithID:(id)a0 kind:(id)a1 metrics:(id)a2 icon:(id)a3 heading:(id)a4 title:(id)a5 subtitle:(id)a6 ageRating:(id)a7 offer:(id)a8 features:(id)a9;
- (id)lockupByAddingFeature:(id)a0;
- (id)lockupWithSignpostTags:(id)a0;

@end
