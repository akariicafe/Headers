@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView *_selectionOutline;
}

@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIImageView *browserImage;

+ (id)reuseIdentifier;

- (id)iconView;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)setPlugin:(id)a0 hideShinyStatus:(BOOL)a1;
- (void)_setImageForPlugin:(id)a0;
- (void)_updateShinyStatus;

@end
