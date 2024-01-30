@interface NSPersistentCloudKitContainerEventResult : NSPersistentStoreResult

@property (readonly) id result;
@property (readonly) long long resultType;

- (id)initWithSubresults:(id)a0;
- (void)dealloc;
- (id)initWithResult:(id)a0 ofType:(long long)a1;

@end
