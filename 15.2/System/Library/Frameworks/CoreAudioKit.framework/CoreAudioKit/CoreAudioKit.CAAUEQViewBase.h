@class _TtC12CoreAudioKit15CAAUEQGraphView, _TtC12CoreAudioKit16CAAUEQHeaderView;

@interface CoreAudioKit.CAAUEQViewBase : UIView {
    void /* unknown type, empty encoding */ viewSetup;
    void /* unknown type, empty encoding */ permanentHeaderConstraints;
    void /* unknown type, empty encoding */ permanentGraphConstraints;
    void /* unknown type, empty encoding */ temporaryConstraints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_headerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_graphView;
}

@property (class, nonatomic, readonly) BOOL requiresConstraintBasedLayout;

@property (nonatomic, retain) _TtC12CoreAudioKit16CAAUEQHeaderView *headerView;
@property (nonatomic, retain) _TtC12CoreAudioKit15CAAUEQGraphView *graphView;

- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;
- (void)configureViewFor:(id)a0;

@end
