@class NSArray, SUTextViewCell;

@interface SUConcernListDataSource : SUTableDataSource

@property (retain, nonatomic) NSArray *concerns;
@property (nonatomic) long long selectedConcernIndex;
@property (readonly, nonatomic) SUTextViewCell *textViewCell;

- (long long)numberOfSections;
- (id)init;
- (void)dealloc;
- (long long)tableViewStyle;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)cellForIndexPath:(id)a0;
- (double)cellHeightForIndexPath:(id)a0;
- (id)_titleCellForIndexPath:(id)a0;

@end
