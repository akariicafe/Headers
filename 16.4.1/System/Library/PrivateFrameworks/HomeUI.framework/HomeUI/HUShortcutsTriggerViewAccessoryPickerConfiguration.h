@protocol HFAccessoryLikeObjectContainer;

@interface HUShortcutsTriggerViewAccessoryPickerConfiguration : NSObject

@property (nonatomic) unsigned long long accessoryPool;
@property (retain, nonatomic) id<HFAccessoryLikeObjectContainer> customAccessoryContainer;
@property (nonatomic) unsigned long long sectionGroupingStyle;
@property (nonatomic) unsigned long long objectLevel;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) BOOL servicesOnly;

- (id)init;
- (void).cxx_destruct;

@end
