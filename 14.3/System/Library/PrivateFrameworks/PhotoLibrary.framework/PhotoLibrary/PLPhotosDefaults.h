@class MPMediaItemCollection;

@interface PLPhotosDefaults : NSObject {
    BOOL _shouldPlayMusic;
    BOOL _summarizeMomentSections;
    int _transition;
    MPMediaItemCollection *_musicCollection;
}

+ (id)sharedInstance;
+ (int)randomTransition;

- (void)setTransition:(int)a0;
- (id)init;
- (int)transition;
- (void)dealloc;
- (BOOL)summarizeMomentSections;
- (void)reloadPhotoDefaultValues;
- (void)_reloadPhotoDefaultValuesAndNotify:(BOOL)a0;
- (int)transitionForAnimationMovingForward:(BOOL)a0;
- (BOOL)shouldPlayMusic;
- (void)setShouldPlayMusic:(BOOL)a0;
- (void)setMusicCollection:(id)a0;
- (id)musicCollection;

@end
