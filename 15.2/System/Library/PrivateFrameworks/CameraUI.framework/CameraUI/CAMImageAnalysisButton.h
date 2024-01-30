@protocol CAMImageAnalysisButtonDelegate;

@interface CAMImageAnalysisButton : VKImageAnalysisButton

@property (nonatomic, getter=isContextMenuDisplayed, setter=_setContextMenuDisplayed:) BOOL contextMenuDisplayed;
@property (weak, nonatomic) id<CAMImageAnalysisButtonDelegate> delegate;

- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (void).cxx_destruct;

@end
