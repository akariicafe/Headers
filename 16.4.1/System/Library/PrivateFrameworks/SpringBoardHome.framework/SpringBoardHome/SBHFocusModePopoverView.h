@class NSString, UIImageView, UILabel, SBIconListView, UIButton;
@protocol SBHFocusModePopoverViewDelegate;

@interface SBHFocusModePopoverView : SBHPopoverView <SBIconListLayoutObserver>

@property (readonly, weak, nonatomic) id<SBHFocusModePopoverViewDelegate> delegate;
@property (readonly, weak, nonatomic) SBIconListView *iconListView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *bodyLabel;
@property (retain, nonatomic) UIButton *editPageButton;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIButton *closeButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)iconListView:(id)a0 didAddIconView:(id)a1;
- (void).cxx_destruct;
- (void)_closeButtonTapped:(id)a0;
- (void)_editPageButtonTapped:(id)a0;
- (void)_updateForUserInterfaceStyle;
- (id)initWithDelegate:(id)a0 iconListView:(id)a1;

@end
