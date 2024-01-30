@class _PASSqliteDatabase;

@interface _PASSqlReadTransaction : NSObject

@property (readonly, nonatomic) _PASSqliteDatabase *db;

- (id)initWithHandle:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
