@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, IKAppDataStoring;

@interface IKJSStorage : IKJSObject <IKJSStorage> {
    struct { BOOL usesExternalDataStore; BOOL externalStorageHasDictionaryRepresentation; } _flags;
}

@property (retain, nonatomic) NSMutableDictionary *storageDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly, weak, nonatomic) id<IKAppDataStoring> appStorage;
@property (readonly, nonatomic) unsigned long long length;

- (void)clear;
- (id)key:(unsigned long long)a0;
- (id)getItem:(id)a0;
- (void)removeItem:(id)a0;
- (void).cxx_destruct;
- (id)keysAndValues;
- (id)initWithAppContext:(id)a0 appStorage:(id)a1;
- (void)_verifyExternalDataStoreForKey:(id)a0;
- (void)setItem:(id)a0 :(id)a1;

@end
