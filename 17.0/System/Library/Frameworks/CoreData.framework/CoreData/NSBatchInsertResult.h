@interface NSBatchInsertResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) unsigned long long resultType;

- (void)dealloc;
- (id)initWithResultType:(unsigned long long)a0 andObject:(id)a1;
- (id)initWithSubresults:(id)a0;

@end
