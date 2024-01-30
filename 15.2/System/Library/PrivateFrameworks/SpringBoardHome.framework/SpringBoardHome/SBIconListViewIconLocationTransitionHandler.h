@class NSString, SBIconListView;

@interface SBIconListViewIconLocationTransitionHandler : NSObject <SBIconListViewIconLocationTransitioning, BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *iconLocation;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, weak, nonatomic) SBIconListView *iconListView;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)completeTransition:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithIconLocation:(id)a0 reason:(id)a1 iconListView:(id)a2;

@end
