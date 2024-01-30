@class HFEventBuilder;
@protocol HFLocationEventBuilder;

@interface HFEventBuilderLocationInterface : HFEventTriggerBuilderInterface

@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *locationEventBuilder;
@property (readonly, nonatomic) BOOL isCustomLocationTrigger;
@property (readonly, nonatomic) BOOL locationCanBeEdited;

- (void).cxx_destruct;

@end
