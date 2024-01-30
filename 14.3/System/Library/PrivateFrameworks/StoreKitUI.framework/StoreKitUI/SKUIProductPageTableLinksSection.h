@class SKUIProductPageItem, SKUIColorScheme, NSMutableArray;

@interface SKUIProductPageTableLinksSection : SKUIProductPageTableSection {
    NSMutableArray *_actions;
    SKUIProductPageItem *_item;
    NSMutableArray *_titles;
}

@property (retain, nonatomic) SKUIColorScheme *colorScheme;

- (void).cxx_destruct;
- (long long)numberOfRowsInSection;
- (double)heightForCellInTableView:(id)a0 indexPath:(id)a1;
- (id)tableViewCellForTableView:(id)a0 indexPath:(id)a1;
- (id)initWithItem:(id)a0 clientContext:(id)a1 askPermission:(BOOL)a2;
- (id)selectionActionForTableView:(id)a0 indexPath:(id)a1;

@end
