@class HMHome;

@interface HUChimeOnAccessoriesListItem : HFItem

@property (nonatomic) BOOL accessoryIsCameraWithDoorbell;
@property (readonly, nonatomic) HMHome *home;

- (id)initWithHome:(id)a0;
- (id)initWithAccessory:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_subclass_updateWithOptions:(id)a0;

@end
