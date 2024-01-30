@interface NSBatchUpdateResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) unsigned long long resultType;

- (id)initWithResultType:(unsigned long long)a0 andObject:(id)a1;
- (id)initWithSubresults:(id)a0;
- (void)dealloc;

@end
