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

- (void)_share:(id)a0;
- (void)_createConstraints;
- (double)_separatorHeight;
- (void)_createViews;
- (BOOL)update;
- (void).cxx_destruct;
- (void)_openURL;
- (void)tintColorDidChange;
- (id)initWithEvent:(id)a0 editable:(BOOL)a1;
- (BOOL)_buttonsShouldUseSeparateLine;
- (id)_defaultListConfiguration;
- (void)updateListConfigWithImage:(id)a0 title:(id)a1 subtitle:(id)a2;
- (void)_updateActionButtonWithType:(unsigned long long)a0;
- (id)_buttonConfigForCurrentTime;

@end
