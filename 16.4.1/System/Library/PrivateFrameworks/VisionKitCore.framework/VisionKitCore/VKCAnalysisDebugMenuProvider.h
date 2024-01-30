@class UIContextMenuInteraction, NSString;
@protocol VKAnalysisDebugInfoProvider;

@interface VKCAnalysisDebugMenuProvider : NSObject <UIContextMenuInteractionDelegate>

@property (retain, nonatomic) UIContextMenuInteraction *contextMenuInteraction;
@property (retain, nonatomic) id<VKAnalysisDebugInfoProvider> provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (id)menuFromElements:(id)a0 title:(id)a1;
- (id)menuFromProvider:(id)a0;
- (void)presentDebugMenuProvider:(id)a0 fromView:(id)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
