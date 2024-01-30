@class HUAccessoryDebugModuleController;
@protocol HFHomeKitObject;

@interface HUAccessoryDebugViewController : HUItemTableViewController

@property (retain, nonatomic) HUAccessoryDebugModuleController *debugModuleController;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)a0;
- (id)initWithHomeKitObject:(id)a0;

@end
