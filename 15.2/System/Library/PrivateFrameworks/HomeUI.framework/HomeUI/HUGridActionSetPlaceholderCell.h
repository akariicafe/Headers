@class HUIconView;

@interface HUGridActionSetPlaceholderCell : HUGridActionSetCell {
    HUIconView *_iconView;
}

- (id)iconView;
- (void)setIconView:(id)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (unsigned long long)iconDisplayStyle;
- (void)_setupActionSetCell;

@end
