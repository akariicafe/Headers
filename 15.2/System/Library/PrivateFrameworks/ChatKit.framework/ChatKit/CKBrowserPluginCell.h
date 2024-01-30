@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView *_selectionOutline;
}

@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIImageView *browserImage;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)iconView;
- (void)setPlugin:(id)a0 hideShinyStatus:(BOOL)a1;
- (void)_setImageForPlugin:(id)a0;
- (void)_updateShinyStatus;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;

@end
