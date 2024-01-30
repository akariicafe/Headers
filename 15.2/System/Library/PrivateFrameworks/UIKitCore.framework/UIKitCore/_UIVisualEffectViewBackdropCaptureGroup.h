@class NSString, NSPointerArray;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray *_backdrops;
}

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNamespace;
@property (nonatomic) double scale;
@property (nonatomic) double minimumScale;
@property (nonatomic) BOOL disableInPlaceFiltering;

- (void)addBackdrop:(id)a0 update:(BOOL)a1;
- (void)applyScaleHint:(double)a0;
- (void)updateAllBackdropViews;
- (long long)indexOfBackdropView:(id)a0;
- (id)description;
- (id)initWithBackdrop:(id)a0;
- (void)removeBackdrop:(id)a0 update:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)allowInPlaceFiltering;
- (id)initWithName:(id)a0 scale:(double)a1;

@end
