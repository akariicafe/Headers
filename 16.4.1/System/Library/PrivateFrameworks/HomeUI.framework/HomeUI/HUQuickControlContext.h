@class NSSet, HMHome;
@protocol HUQuickControlItemUpdating;

@interface HUQuickControlContext : NSObject

@property (readonly, nonatomic) Class quickControlClass;
@property (readonly, copy, nonatomic) NSSet *controlItems;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, weak, nonatomic) id<HUQuickControlItemUpdating> itemUpdater;
@property (nonatomic) unsigned long long preferredControl;
@property (nonatomic) unsigned long long controlOrientation;

- (void).cxx_destruct;
- (id)affectedCharacteristics;
- (id)initWithQuickControlClass:(Class)a0 controlItems:(id)a1 home:(id)a2 itemUpdater:(id)a3;
- (Class)viewProfileClass;

@end
