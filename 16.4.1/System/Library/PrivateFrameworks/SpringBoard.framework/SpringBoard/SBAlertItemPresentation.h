@class SBAlertItem, NSString;
@protocol SBAlertItemPresenter;

@interface SBAlertItemPresentation : NSObject <BSDescriptionProviding>

@property (retain, nonatomic) SBAlertItem *alertItem;
@property (retain, nonatomic) id<SBAlertItemPresenter> presenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithAlertItem:(id)a0 presenter:(id)a1;

@end
