@class UIImageView, IMBalloonPlugin;

@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView *_selectionOutline;
}

@property (retain, nonatomic) IMBalloonPlugin *plugin;
@property (retain, nonatomic) UIImageView *browserImage;

+ (id)reuseIdentifier;

- (id)iconView;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setImageForPlugin:(id)a0;
- (void)_updateShinyStatus;
- (void)setPlugin:(id)a0 hideShinyStatus:(BOOL)a1;

@end
