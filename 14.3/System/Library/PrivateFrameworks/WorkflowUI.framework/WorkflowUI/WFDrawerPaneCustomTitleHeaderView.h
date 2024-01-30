@class UIView, NSString, WFDrawerPaneCloseButton;
@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneCustomTitleHeaderView : UIView <WFDrawerPaneHeaderView>

@property (readonly, weak, nonatomic) WFDrawerPaneCloseButton *closeButton;
@property (readonly, weak, nonatomic) UIView *titleView;
@property (weak, nonatomic) id<WFDrawerPaneHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
