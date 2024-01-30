@class NSMutableDictionary;

@interface UIKBAutoFillTestTableViewDataSource : NSObject <NSCoding> {
    NSMutableDictionary *_rowCountMap;
    NSMutableDictionary *_visibleCellDataMap;
    NSMutableDictionary *_headerDataMap;
    NSMutableDictionary *_footerDataMap;
}

@property (readonly, nonatomic) long long numberOfSections;

- (void)encodeWithCoder:(id)a0;
- (void)setNumberOfRows:(long long)a0 forSection:(long long)a1;
- (void)setCellData:(id)a0 forRowAtIndexPath:(id)a1;
- (void)setHeaderData:(id)a0 forSection:(long long)a1;
- (void)setFooterData:(id)a0 forSection:(long long)a1;
- (double)heightForRowAtIndexPath:(id)a0;
- (id)titleForFooterInSection:(long long)a0;
- (double)heightForHeaderInSection:(long long)a0;
- (double)heightForFooterInSection:(long long)a0;
- (id)viewForHeaderInSection:(long long)a0;
- (id)viewForFooterInSection:(long long)a0;
- (long long)numberOfRowsInSection:(long long)a0;
- (id)cellForRowAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)titleForHeaderInSection:(long long)a0;

@end
