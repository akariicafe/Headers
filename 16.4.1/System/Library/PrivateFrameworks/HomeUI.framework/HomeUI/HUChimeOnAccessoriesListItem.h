@class HMHome;

@interface HUChimeOnAccessoriesListItem : HFItem

@property (nonatomic) BOOL accessoryIsCameraWithDoorbell;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)initWithHome:(id)a0;
- (id)_subclass_updateWithOptions:(id)a0;

@end
