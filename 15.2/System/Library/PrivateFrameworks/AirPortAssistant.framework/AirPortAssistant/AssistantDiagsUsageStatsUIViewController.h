@class NSString, TextLinkButton, UIView;

@interface AssistantDiagsUsageStatsUIViewController : AssistantSubUIViewController <TableViewManagerDelegate, UINavigationControllerDelegate, TextLinkButtonDelegate> {
    TextLinkButton *linkButton;
    id previousNavDelegate;
}

@property (retain, nonatomic) UIView *linkContainerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)dealloc;
- (void)touchInCellAtIndexPath:(id)a0;
- (void)handleTextLinkTap;
- (void)setUpInitialTableFooter;

@end
