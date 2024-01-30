@class NSArray;
@protocol BSInvalidatable;

@interface SBMainDisplayInterfaceOrientationAggregator : NSObject {
    id<BSInvalidatable> _stateCaptureHandle;
}

@property (readonly, nonatomic) long long activeInterfaceOrientation;
@property (readonly, retain, nonatomic) NSArray *interfaceOrientationSources;

- (long long)_layoutOrientation;
- (long long)activeInterfaceOrientationAtOrBelow:(double)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)highestActiveInterfaceOrientationSource;
- (id)succinctDescription;
- (id)description;
- (id)highestActiveInterfaceOrientationSourceBelow:(double)a0;
- (id)highestActiveInterfaceOrientationSourceIgnoringSourcesAbove:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_sortSources:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)activeInterfaceOrientationBelow:(double)a0;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)_highestSourceAtOrBelow:(double)a0 amongSources:(id)a1;

@end
