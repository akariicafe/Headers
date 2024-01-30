@interface GameCenterUI.GKPlayerGroupView : GameCenterUI.GKPlayerGroupBaseView {
    void /* unknown type, empty encoding */ playerCount;
    void /* unknown type, empty encoding */ playerSelectionProxy;
    void /* unknown type, empty encoding */ groupImageView;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ iconContainer;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView1;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView2;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView3;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView4;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView5;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView6;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView7;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView1WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView2WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView3WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView4WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView5WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView6WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView7WidthContraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView1LeadingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView1TopConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView2TrailingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView2BottomConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView3LeadingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView3BottomConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView4TrailingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView4TopConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView5LeadingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView5BottomConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView6LeadingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView6TopConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView7LeadingConstraint;
@property (nonatomic, weak) void /* unknown type, empty encoding */ playerView7BottomConstraint;

+ (id)create;

- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)configureWithPlayers:(id)a0 messagesGroupIdentifier:(id)a1 playerSelectionProxy:(id)a2;

@end
