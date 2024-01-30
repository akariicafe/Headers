@protocol HFIconDescriptor;

@interface HFServiceIconItem : HFItem

@property (readonly, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (void).cxx_destruct;
- (id)initWithIconDescriptor:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
