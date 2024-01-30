@class SBRootFolderView, NSString;

@interface _SBRootFolderDockOffscreenFractionClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding>

@property (retain, nonatomic) SBRootFolderView *folderView;
@property (nonatomic) double desiredOffscreenFraction;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)succinctDescription;
- (void)setDockOffscreenFraction:(double)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)initWithFolderView:(id)a0 reason:(id)a1;
- (void)layoutIfNeededForDockOffscreenFractionChanged;

@end
