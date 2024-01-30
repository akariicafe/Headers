@class NSString, SBIconListView;

@interface SBIconListViewIconVisibilityAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) SBIconListView *listView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithListView:(id)a0 reason:(id)a1;
- (void)invalidate;

@end
