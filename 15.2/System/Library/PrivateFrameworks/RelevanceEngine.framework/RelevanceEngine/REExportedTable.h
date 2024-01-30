@class NSArray, NSMutableArray;

@interface REExportedTable : NSObject {
    NSMutableArray *_data;
}

@property (retain, nonatomic) NSArray *header;
@property (readonly, nonatomic) unsigned long long rowsCount;
@property (nonatomic) BOOL sortable;

- (void)addRow:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)rowAtIndex:(unsigned long long)a0;

@end
