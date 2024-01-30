@class NSString, NSSet, NSData, NSDate, _TtC18HealthPlatformCore11FeedSection;

@interface HealthPlatformCore.FeedItem : NSManagedObject

@property (nonatomic, copy) NSDate *dateSubmitted;
@property (nonatomic) BOOL hideInDiscover;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSString *pluginPackage;
@property (nonatomic) long long sortOrder;
@property (nonatomic, copy) NSString *storyboardIdentifier;
@property (nonatomic, copy) NSString *viewControllerClassName;
@property (nonatomic) double suggestionRelevanceScore;
@property (nonatomic, copy) NSData *userData;
@property (nonatomic, copy) NSString *contentKindRawValue;
@property (nonatomic, copy) NSSet *dataTypes;
@property (nonatomic, copy) NSSet *featureTags;
@property (nonatomic, retain) _TtC18HealthPlatformCore11FeedSection *feedSection;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic) short searchSectionRawValue;
@property (nonatomic) short searchSectionHintRawValue;
@property (nonatomic) long long sectionSortOrder;
@property (nonatomic, copy) NSDate *relevantStartDate;
@property (nonatomic, copy) NSDate *relevantEndDate;
@property (nonatomic) double relevantRampUpTime;
@property (nonatomic) double relevantRampDownTime;
@property (nonatomic, copy) NSDate *boundingStartDate;
@property (nonatomic, copy) NSDate *boundingEndDate;
@property (nonatomic) long long sortHint;
@property (nonatomic) BOOL indexForSearch;

- (void).cxx_construct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
