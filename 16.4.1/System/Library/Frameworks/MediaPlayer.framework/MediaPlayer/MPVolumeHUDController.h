@class NSMutableSet, NSHashTable;

@interface MPVolumeHUDController : NSObject {
    NSHashTable *_scenes;
    NSMutableSet *_displays;
    NSMutableSet *_categories;
    BOOL _needsUpdate;
}

@property (class, readonly, nonatomic) MPVolumeHUDController *sharedInstance;

@property (readonly, nonatomic) id mainContext;

- (void)setNeedsUpdate;
- (void)_updateVisibilityForVolumeDisplays:(id)a0 inWindowScene:(id)a1;
- (void)registerView:(id)a0 inContext:(id)a1;
- (void)removeVolumeDisplay:(id)a0;
- (void)_updateVisibility;
- (void)addVolumeDisplay:(id)a0;
- (id)init;
- (void)unregisterView:(id)a0 inContext:(id)a1;
- (void)_addCategory:(id)a0;
- (void).cxx_destruct;

@end
