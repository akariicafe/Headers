@interface NSPersistentHistoryResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) long long resultType;

- (id)initWithSubresults:(id)a0;
- (void)dealloc;
- (id)description;
- (id)initWithResultType:(long long)a0 andResult:(id)a1;

@end
