@class NSString, UIView, UISearchBar, UIButton;
@protocol WFDrawerPaneHeaderViewDelegate;

@interface WFDrawerPaneSearchHeaderView : UIView <WFDrawerPaneHeaderView>

@property (readonly, weak, nonatomic) UIButton *closeButton;
@property (readonly, weak, nonatomic) UIView *separatorView;
@property (readonly, weak, nonatomic) UISearchBar *searchBar;
@property (weak, nonatomic) id<WFDrawerPaneHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)layoutConstraints;
- (id)initWithSearchBar:(id)a0;

@end
