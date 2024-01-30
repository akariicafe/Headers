@class NSString, NSSet, _TtC18HealthPlatformCore11FeedSection, NSDate, NSData;

@interface HealthPlatformCore.FeedItem : NSManagedObject

@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSString *contentKindRawValue;
@property (nonatomic, copy) NSSet *dataTypes;
@property (nonatomic, copy) NSDate *dateSubmitted;
@property (nonatomic, copy) NSString *favoriteStatusRawValue;
@property (nonatomic, copy) NSSet *featureTags;
@property (nonatomic, retain) _TtC18HealthPlatformCore11FeedSection *feedSection;
@property (nonatomic) BOOL hideInDiscover;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic, copy) NSString *localizedCategoryName;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *pluginPackage;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic) short searchSectionHintRawValue;
@property (nonatomic) short searchSectionRawValue;
@property (nonatomic) long long sectionSortOrder;
@property (nonatomic) long long sortOrder;
@property (nonatomic, copy) NSString *storyboardIdentifier;
@property (nonatomic) double suggestionRelevanceScore;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSData *userData;
@property (nonatomic, copy) NSString *viewClassName;
@property (nonatomic, copy) NSString *viewControllerClassName;
@property (nonatomic, copy) NSString *hostingControllerClassName;
@property (nonatomic, copy) NSDate *relevantStartDate;
@property (nonatomic, copy) NSDate *relevantEndDate;
@property (nonatomic) double relevantRampUpTime;
@property (nonatomic) double relevantRampDownTime;
@property (nonatomic, copy) NSDate *boundingStartDate;
@property (nonatomic, copy) NSDate *boundingEndDate;
@property (nonatomic) long long sortHint;
@property (nonatomic) BOOL indexForSearch;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;
- (void).cxx_construct;

@end
