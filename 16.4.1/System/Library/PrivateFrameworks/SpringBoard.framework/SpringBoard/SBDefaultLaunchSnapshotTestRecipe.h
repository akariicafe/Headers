@class NSString, SBAlertItem;

@interface SBDefaultLaunchSnapshotTestRecipe : NSObject <SBTestRecipe> {
    SBAlertItem *_alertItem;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
