@interface NSPersistentHistoryResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) long long resultType;

+ (id)_processResult:(id)a0 forRequest:(id)a1 withProvider:(id)a2;

- (id)initWithResultType:(long long)a0 andResult:(id)a1;
- (id)initWithSubresults:(id)a0;
- (void)dealloc;
- (id)description;

@end
