@class HUIconView;

@interface HUGridActionSetPlaceholderCell : HUGridActionSetCell {
    HUIconView *_iconView;
}

- (id)iconView;
- (void)updateConstraints;
- (void)setIconView:(id)a0;
- (void).cxx_destruct;
- (void)_setupActionSetCell;
- (unsigned long long)iconDisplayStyle;

@end
