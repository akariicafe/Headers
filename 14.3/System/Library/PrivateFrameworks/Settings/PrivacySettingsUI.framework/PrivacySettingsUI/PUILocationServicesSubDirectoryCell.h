@class PUILocationUsageMixin;

@interface PUILocationServicesSubDirectoryCell : PSTableCell

@property (readonly, nonatomic) PUILocationUsageMixin *location;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)canReload;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
