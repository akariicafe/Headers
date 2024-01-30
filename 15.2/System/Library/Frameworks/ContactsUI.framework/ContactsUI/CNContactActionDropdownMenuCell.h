@class CNContactActionDropdownMenuButton, UIContextMenuInteraction;

@interface CNContactActionDropdownMenuCell : CNContactActionCell

@property (retain, nonatomic) CNContactActionDropdownMenuButton *button;
@property (copy, nonatomic) id /* block */ menuProvider;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
