@class CNContactActionDropdownMenuButton, UIContextMenuInteraction;

@interface CNContactActionDropdownMenuCell : CNContactActionCell

@property (retain, nonatomic) CNContactActionDropdownMenuButton *button;
@property (copy, nonatomic) id /* block */ menuProvider;
@property (readonly, nonatomic) UIContextMenuInteraction *contextMenuInteraction;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
