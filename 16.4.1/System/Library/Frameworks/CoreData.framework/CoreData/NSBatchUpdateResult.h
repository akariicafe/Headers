@interface NSBatchUpdateResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) unsigned long long resultType;

- (id)initWithSubresults:(id)a0;
- (id)initWithResultType:(unsigned long long)a0 andObject:(id)a1;
- (void)dealloc;

@end
