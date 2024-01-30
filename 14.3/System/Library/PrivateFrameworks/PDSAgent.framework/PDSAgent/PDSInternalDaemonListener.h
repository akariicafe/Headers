@protocol PDSKVStore;

@interface PDSInternalDaemonListener : NSObject <PDSRemoteInternal>

@property (retain, nonatomic) id<PDSKVStore> kvStore;

- (void).cxx_destruct;
- (void)setStringValue:(id)a0 forKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)setNumberValue:(id)a0 forKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)setDataValue:(id)a0 forKey:(id)a1 withCompletion:(id /* block */)a2;
- (void)stringRepresentationForKey:(id)a0 withCompletion:(id /* block */)a1;
- (void)kvStateDumpWithCompletion:(id /* block */)a0;
- (id)initWithKVStore:(id)a0;

@end
