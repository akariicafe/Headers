@class CAFilter, NSString, UIButton, NSMutableArray, PKApplicationMessage, PKApplicationMessageNode, PKApplicationMessageContentView, PKApplicationMessageViewConfiguration;
@protocol PKPGSVSectionSubheaderDelegate, PKApplicationMessageViewDelegate;

@interface PKApplicationMessageView : UIControl <PKApplicationMessageContentViewDelegate, PKPGSVSectionSubheaderView> {
    PKApplicationMessageView *_parent;
    BOOL _visited;
    PKApplicationMessageNode *_content;
    PKApplicationMessage *_message;
    BOOL _inTreeLayout;
    struct { BOOL userExpandedBelow; BOOL hasMessageViewBelow; BOOL hasPrecedingMessageView; BOOL allPresentedAbove; BOOL presented; int presentationLayoutMode; } _treeLayoutState;
    NSMutableArray *_stagedRemovedSubviews;
    BOOL _hasPrecedingMessageView;
    double _messageViewHeightRestriction;
    BOOL _layoutStateDirty;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutStateBounds;
    struct { struct CGSize { double width; double height; } size; } _layoutState;
    BOOL _dismissable;
    BOOL _messageViewPresented;
    int _messageViewPresentationLayoutMode;
    struct CGSize { double width; double height; } _messageViewSize;
    BOOL _invalidated;
    int _layoutMode;
    unsigned long long _depth;
    BOOL _reloadQueued;
    BOOL _reloadQueuedIsRoot;
    UIButton *_dismissButton;
    PKApplicationMessageContentView *_messageView;
    NSMutableArray *_children;
    NSMutableArray *_removedSubviews;
    NSMutableArray *_removedVisualSubviews;
    BOOL _inLayout;
    CAFilter *_blurFilter;
    double _filterRadius;
    CAFilter *_highlightFilter;
    struct CGColor { } *_filterColor;
    BOOL _enabled;
    BOOL _selected;
    BOOL _highlighted;
    id<PKPGSVSectionSubheaderDelegate> _subheaderDelegate;
    long long _type;
}

@property (readonly, nonatomic) PKApplicationMessageViewConfiguration *configuration;
@property (readonly, nonatomic) PKApplicationMessageNode *content;
@property (weak, nonatomic) id<PKApplicationMessageViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)setSelected:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)collapse;
- (void)dealloc;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setEnabled:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (long long)scrollType;
- (void)_tapped:(id)a0;
- (void)applicationMessageContentViewDismissTapped:(id)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (BOOL)needsRemoval;
- (void)setContent:(id)a0 animated:(BOOL)a1;
- (void)setSectionsState:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; } x0; unsigned char x1 : 1; unsigned char x2 : 1; })a0;
- (void)setSubheaderDelegate:(id)a0;

@end
