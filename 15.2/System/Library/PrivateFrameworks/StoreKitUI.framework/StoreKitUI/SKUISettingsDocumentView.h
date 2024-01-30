@protocol SKUISettingsDocumentViewDelegate;

@interface SKUISettingsDocumentView : UIView

@property (weak, nonatomic) id<SKUISettingsDocumentViewDelegate> delegate;

- (void).cxx_destruct;
- (void)tintColorDidChange;

@end
