@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryTransaction : NSObject

@property (readonly, nonatomic) SSSQLiteDatabase *database;

- (void)dealloc;
- (id)initWithDatabase:(id)a0;

@end
