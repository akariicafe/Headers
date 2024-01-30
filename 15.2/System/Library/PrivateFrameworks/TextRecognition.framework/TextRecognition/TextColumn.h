@class NSArray, NSMutableArray;

@interface TextColumn : NSObject

@property (retain, nonatomic) NSMutableArray *mutableRows;
@property (readonly, retain, nonatomic) NSArray *rows;
@property (readonly) unsigned long long rowCount;

- (void)addRow:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithRows:(id)a0;
- (void)sortRowsInAscendingOrder;

@end
