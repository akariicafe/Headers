@class NSMutableArray;

@interface MKTable : NSObject

@property (retain, nonatomic) NSMutableArray *rows;
@property (retain, nonatomic) NSMutableArray *columns;

- (id)init;
- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (void)writeToDisk:(id)a0;
- (void)writeToLog;

@end
