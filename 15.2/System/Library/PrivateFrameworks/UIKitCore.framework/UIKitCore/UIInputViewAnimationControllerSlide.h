@class NSString;

@interface UIInputViewAnimationControllerSlide : NSObject <UIInputViewAnimationController> {
    int _slide;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performAnimationWithHost:(id)a0 context:(id)a1;
- (void)completeAnimationWithHost:(id)a0 context:(id)a1;
- (id)placementForSlideStart:(BOOL)a0;
- (id)prepareAnimationWithHost:(id)a0 startPlacement:(id)a1 endPlacement:(id)a2;
- (id)initWithSlide:(int)a0;

@end
