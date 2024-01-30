@class NSArray;
@protocol BSInvalidatable;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic) long long activeInterfaceOrientation;
@property (readonly, retain, nonatomic) NSArray *interfaceOrientationSources;

- (long long)_layoutOrientation;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)highestActiveInterfaceOrientationSourceBelow:(double)a0;
- (id)highestActiveInterfaceOrientationSource;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)description;
- (id)succinctDescriptionBuilder;
- (long long)activeInterfaceOrientationBelow:(double)a0;
- (id)_highestSourceAtOrBelow:(double)a0 amongSources:(id)a1;
- (id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)a0;
- (void)_sortSources:(id)a0;
- (long long)activeInterfaceOrientationAtOrBelow:(double)a0;

@end
