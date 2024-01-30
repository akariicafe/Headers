@class PUILocationUsageMixin;

@interface PUILocationServicesSubDirectoryCell : PSTableCell

@property (readonly, nonatomic) PUILocationUsageMixin *location;

- (BOOL)canReload;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;

@end
