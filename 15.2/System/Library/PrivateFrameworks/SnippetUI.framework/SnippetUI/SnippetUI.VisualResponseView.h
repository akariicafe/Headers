@class NSString;
@protocol VRXInteractionDelegate;

@interface SnippetUI.VisualResponseView : UIView <VRXVisualResponse> {
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ responseView;
    void /* unknown type, empty encoding */ hostingViewController;
}

@property (nonatomic) long long currentIdiom;
@property (nonatomic) double snippetWidth;
@property (nonatomic, retain) id<VRXInteractionDelegate> interactionDelegate;
@property (nonatomic, readonly) NSString *description;

- (void)updateSharedState:(id)a0;
- (void)updateSharedStateData:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
