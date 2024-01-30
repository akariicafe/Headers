@class MPModelStoreBrowseResponse, NSString, NSURL, MPModelRadioStation;

@interface MPModelStoreBrowseSection : MPModelObject

@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long sectionType;
@property (copy, nonatomic) NSURL *loadAdditionalContentURL;
@property (nonatomic) BOOL displaysAsGridCellInCarPlay;
@property (nonatomic) long long uniformContentItemType;
@property (nonatomic, getter=isMemberOfChartSet) BOOL memberOfChartSet;
@property (nonatomic, getter=isBrick) BOOL brick;
@property (retain, nonatomic) MPModelStoreBrowseResponse *previouslyRetrievedNestedResponse;
@property (retain, nonatomic) MPModelRadioStation *radioStation;
@property (nonatomic) BOOL containsOnlyEditorialElements;

+ (id)__radioStation_KEY;
+ (id)__brick_KEY;
+ (id)__displaysAsGridCellInCarPlay_KEY;
+ (id)__loadAdditionalContentURL_KEY;
+ (id)__memberOfChartSet_KEY;
+ (id)__previouslyRetrievedNestedResponse_KEY;
+ (id)__sectionType_KEY;
+ (id)__title_KEY;
+ (id)__uniformContentItemType_KEY;


@end
