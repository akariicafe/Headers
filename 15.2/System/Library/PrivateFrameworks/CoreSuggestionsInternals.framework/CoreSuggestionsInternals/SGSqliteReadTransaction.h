@class SGSqliteDatabase;

@interface SGSqliteReadTransaction : NSObject

@property (readonly, nonatomic) SGSqliteDatabase *db;

- (id)initWithHandle:(id)a0;
- (void).cxx_destruct;

@end
