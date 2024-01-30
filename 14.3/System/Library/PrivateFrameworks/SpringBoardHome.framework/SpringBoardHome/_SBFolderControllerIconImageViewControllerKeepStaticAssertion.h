@class SBFolderController, NSIndexSet, NSString;

@interface _SBFolderControllerIconImageViewControllerKeepStaticAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBFolderController *folderController;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, copy, nonatomic) NSIndexSet *pageIndexesToExclude;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithFolderController:(id)a0 pageIndexesToExclude:(id)a1 reason:(id)a2;
- (id)succinctDescriptionBuilder;
- (void)invalidate;

@end
