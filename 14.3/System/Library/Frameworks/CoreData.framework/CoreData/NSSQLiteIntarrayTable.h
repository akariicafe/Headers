@class NSString;

@interface NSSQLiteIntarrayTable : NSObject

@property (nonatomic) struct sqlite3_intarray { } *intarrayTable;
@property (retain, nonatomic) NSString *intarrayTableName;

- (void)dealloc;

@end
