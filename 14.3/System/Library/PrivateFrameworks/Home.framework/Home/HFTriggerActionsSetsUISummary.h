@class NSString, NSMutableDictionary, NSArray, NSMutableArray;

@interface HFTriggerActionsSetsUISummary : NSObject

@property (nonatomic) unsigned long long numberOfScenes;
@property (nonatomic) unsigned long long numberOfStandaloneServices;
@property (nonatomic) unsigned long long numberOfMediaAccessories;
@property (nonatomic) unsigned long long totalStandaloneAndMediaAccessoriesCount;
@property (retain, nonatomic) NSString *firstSceneName;
@property (retain, nonatomic) NSString *firstServiceName;
@property (retain, nonatomic) NSString *mediaAccessoryName;
@property (retain, nonatomic) NSMutableArray *icons;
@property (retain, nonatomic) NSMutableArray *iconDescriptors;
@property (retain, nonatomic) NSMutableDictionary *iconCounter;
@property (readonly, nonatomic) NSString *summaryDescription;
@property (readonly, nonatomic) NSArray *summaryDescriptors;
@property (readonly, nonatomic) BOOL hasUniqueServiceGroup;
@property (nonatomic) BOOL needsIconSort;
@property (readonly, nonatomic) unsigned long long numberOfIcons;
@property (retain, nonatomic) NSString *uniqueServiceGroupName;

- (id)init;
- (void).cxx_destruct;
- (void)addMediaAccessoryNamed:(id)a0;
- (id)summaryText;
- (id)summaryIconDescriptors;
- (id)initWithSummaryText:(id)a0 summaryIconDescriptors:(id)a1;
- (void)addSceneNamed:(id)a0;
- (void)addIconDescriptor:(id)a0;
- (void)addServiceNamed:(id)a0;
- (id)summaryText:(BOOL)a0;
- (id)_descriptionForZeroAccessories;
- (id)_descriptionForZeroScenes;
- (void)_sortIconDescriptors;
- (void)_incrementIconCounter:(id)a0;
- (id)initWithSummaryText:(id)a0 summaryIconNames:(id)a1;
- (id)summaryIcons;

@end
