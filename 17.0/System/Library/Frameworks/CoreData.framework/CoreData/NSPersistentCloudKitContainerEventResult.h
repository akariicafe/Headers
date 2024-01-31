@interface NSPersistentCloudKitContainerEventResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) long long resultType;

- (void)dealloc;
- (id)initWithSubresults:(id)a0;
- (id)initWithResult:(id)a0 ofType:(long long)a1;

@end
