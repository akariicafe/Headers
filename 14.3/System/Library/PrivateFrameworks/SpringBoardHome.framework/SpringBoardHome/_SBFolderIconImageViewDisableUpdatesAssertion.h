@class NSString, SBFolderIconImageView;

@interface _SBFolderIconImageViewDisableUpdatesAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>

@property (readonly, weak, nonatomic) SBFolderIconImageView *folderIconImageView;
@property (readonly, copy, nonatomic) NSString *reason;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
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
- (id)initWithFolderIconImageView:(id)a0 reason:(id)a1;
- (void)invalidate;

@end
