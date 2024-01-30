@class NSString;
@protocol UIContentConfiguration;

@interface _TtC5UIKitP33_B626C8241CE05CD32813912C34F02B2220_UICustomContentView : UIView <_UIContentViewInternal> {
    void /* unknown type, empty encoding */ wrappedContentView;
}

@property (nonatomic, retain) id<UIContentConfiguration> configuration;
@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)_wrappedContentView;

@end
