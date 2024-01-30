@class HUIconView;

@interface HUGridActionSetPlaceholderCell : HUGridActionSetCell {
    HUIconView *_iconView;
}

- (void)setIconView:(id)a0;
- (id)iconView;
- (void).cxx_destruct;
- (void)updateConstraints;
- (unsigned long long)iconDisplayStyle;
- (void)_setupActionSetCell;

@end
