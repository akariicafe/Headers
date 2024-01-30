@class NSString;

@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe> {
    unsigned long long _mode;
    BOOL _addSide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_perform;
- (id)init;
- (id)title;

@end
