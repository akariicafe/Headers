@class NSString, NSArray;

@interface SSPhotosResultBuilder : SSResultBuilder

@property (nonatomic) BOOL isSyndicated;
@property (retain, nonatomic) NSString *photoIdentifier;
@property (retain, nonatomic) NSArray *namesOfPeopleInPhoto;
@property (retain, nonatomic) NSArray *personPhotoIdentifiersOfPeopleInPhoto;
@property (retain, nonatomic) NSArray *peopleInPhoto;
@property (retain, nonatomic) NSArray *matchedPeople;

+ (id)bundleId;
+ (BOOL)supportsResult:(id)a0;
+ (BOOL)isCoreSpotlightResult;

- (id)initWithResult:(id)a0;
- (id)appBundleId;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildImageCardSection;
- (id)buildInlineCardSections;
- (id)buildResult;
- (id)buildThumbnail;
- (void)populateMatchedPeopleInPhoto;
- (id)subclassBuildHorizontallyScrollingCardSection;

@end
