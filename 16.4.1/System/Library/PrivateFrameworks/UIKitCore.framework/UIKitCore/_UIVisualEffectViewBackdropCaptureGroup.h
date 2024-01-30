@class NSString, NSPointerArray;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject {
    NSPointerArray *_backdrops;
}

@property (copy, nonatomic) NSString *groupName;
@property (copy, nonatomic) NSString *groupNamespace;
@property (nonatomic) double scale;
@property (nonatomic) double minimumScale;
@property (nonatomic) BOOL disableInPlaceFiltering;

- (void)removeBackdrop:(id)a0 update:(BOOL)a1;
- (id)initWithBackdrop:(id)a0;
- (void)updateAllBackdropViews;
- (void)addBackdrop:(id)a0 update:(BOOL)a1;
- (void)applyScaleHint:(double)a0;
- (id)init;
- (BOOL)allowInPlaceFiltering;
- (id)description;
- (id)initWithName:(id)a0 scale:(double)a1;
- (long long)indexOfBackdropView:(id)a0;
- (void).cxx_destruct;

@end
