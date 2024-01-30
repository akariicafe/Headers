@class CNUIUserActionListDataSource, NSString, UILabel, CNActionView;
@protocol CNPropertyCellDelegate;

@interface CNFaceTimeCell : CNLabeledCell <CNActionViewDelegate>

@property (readonly, nonatomic) UILabel *faceTimeLabel;
@property (nonatomic) BOOL isFaceTimeAudioAvailable;
@property (readonly, nonatomic) CNActionView *actionView1;
@property (readonly, nonatomic) CNActionView *actionView2;
@property (retain, nonatomic) CNUIUserActionListDataSource *actionsDataSource;
@property (weak, nonatomic) id<CNPropertyCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)tintColorDidChange;
- (void).cxx_destruct;
- (id)labelView;
- (void)updateHorizontalTouchAreas;
- (void)didPressActionView:(id)a0 longPress:(BOOL)a1;
- (id)variableConstraints;
- (double)minCellHeight;
- (id)rightMostView;
- (id)constantConstraints;
- (void)performDefaultAction;

@end
