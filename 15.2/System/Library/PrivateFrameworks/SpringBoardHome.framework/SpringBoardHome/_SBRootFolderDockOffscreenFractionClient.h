@class SBRootFolderView, NSString;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>

@property (retain, nonatomic) SBRootFolderView *folderView;
@property (nonatomic) double desiredOffscreenFraction;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)layoutIfNeededForDockOffscreenFractionChanged;
- (void)setDockOffscreenFraction:(double)a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (void)dealloc;
- (id)initWithFolderView:(id)a0 reason:(id)a1;

@end
