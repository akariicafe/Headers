@class UIListContentView, NSArray, UIView, NSObject, UIButton;
@protocol ConferenceCellDelegate;

@interface EKEventDetailConferenceCell : EKEventDetailCell {
    UIButton *_openURLButton;
    UIButton *_shareButton;
    unsigned long long _actionButtonType;
    UIListContentView *_listView;
    UIView *_topSeparator;
    UIView *_bottomSeparator;
    NSArray *_constraints;
}

@property (weak, nonatomic) NSObject<ConferenceCellDelegate> *delegate;

- (double)_separatorHeight;
- (BOOL)update;
- (void)tintColorDidChange;
- (void)_share:(id)a0;
- (void).cxx_destruct;
- (void)_createConstraints;
- (void)_createViews;
- (void)_openURL;
- (id)_buttonConfigForCurrentTime;
- (BOOL)_buttonsShouldUseSeparateLine;
- (id)_defaultListConfiguration;
- (void)_updateActionButtonWithType:(unsigned long long)a0;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (void)updateListConfigWithImage:(id)a0 title:(id)a1 subtitle:(id)a2;

@end
