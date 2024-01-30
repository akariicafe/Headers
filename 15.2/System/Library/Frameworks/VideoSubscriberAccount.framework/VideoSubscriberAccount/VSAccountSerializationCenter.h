@class NSOperationQueue, NSUndoManager, VSPersistentStorage;

@interface VSAccountSerializationCenter : NSObject

@property (retain, nonatomic) NSOperationQueue *serializationQueue;
@property (retain, nonatomic) VSPersistentStorage *storage;
@property (retain, nonatomic) NSUndoManager *undoManager;

+ (id)defaultSerializationCenter;

- (void).cxx_destruct;
- (id)init;
- (id)exportDataWithCompletionHandler:(id /* block */)a0;
- (id)importData:(id)a0 withCompletionHandler:(id /* block */)a1;

@end
