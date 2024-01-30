@class HFEventBuilder;
@protocol HFLocationEventBuilder;

@interface HFLocationEventBuilderItem : HFEventBuilderItem

@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *locationEventBuilder;

- (id)_subclass_updateWithOptions:(id)a0;

@end
