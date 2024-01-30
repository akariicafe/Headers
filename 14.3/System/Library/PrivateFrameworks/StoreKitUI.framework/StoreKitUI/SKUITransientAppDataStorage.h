@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clear;
- (id)keyAtIndex:(unsigned long long)a0;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)setData:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeDataForKey:(id)a0;
- (id)getDataForKey:(id)a0;

@end
