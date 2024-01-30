@class SBRootFolderView, NSString;

@interface _SBRootFolderViewElementBorrowedAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (retain, nonatomic) SBRootFolderView *folderView;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithFolderView:(id)a0 reason:(id)a1;
- (id)succinctDescriptionBuilder;
- (void)dealloc;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;

@end
