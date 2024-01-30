@class NSString, UIColor, UIImage;

@interface _UIOverlayEffectViewEntry : _UIVisualEffectViewEntry

@property (copy, nonatomic) NSString *filterType;
@property (copy, nonatomic) UIColor *color;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double alpha;

+ (id)newEntryWithFilterType:(id)a0 color:(id)a1 alpha:(double)a2;
+ (id)newEntryWithFilterType:(id)a0 image:(id)a1 alpha:(double)a2;

- (void)applyIdentityEffectToView:(id)a0;
- (void)applyRequestedEffectToView:(id)a0;
- (void)addEffectToView:(id)a0;
- (void)removeEffectFromView:(id)a0;
- (id)description;
- (BOOL)canTransitionToEffect:(id)a0;
- (void).cxx_destruct;

@end
