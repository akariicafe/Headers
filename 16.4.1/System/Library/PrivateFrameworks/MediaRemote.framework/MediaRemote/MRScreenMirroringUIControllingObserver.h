@class MRScreenMirroringObserver;
@protocol MRScreenMirroringQuickControlsUIControllable;

@interface MRScreenMirroringUIControllingObserver : MRScreenMirroringObserver

@property (retain, nonatomic) id<MRScreenMirroringQuickControlsUIControllable> uiController;
@property (readonly, nonatomic) MRScreenMirroringObserver *internalObserver;

- (id)init;
- (void).cxx_destruct;
- (void)_mirrorStateChanged:(BOOL)a0 screenType:(unsigned int)a1;

@end
