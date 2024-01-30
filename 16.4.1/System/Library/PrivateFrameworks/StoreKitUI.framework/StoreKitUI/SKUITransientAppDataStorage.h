@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKUITransientAppDataStorage : NSObject <IKAppDataStoring>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSMutableDictionary *storage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)setData:(id)a0 forKey:(id)a1;
- (id)keyAtIndex:(unsigned long long)a0;
- (void)removeDataForKey:(id)a0;
- (unsigned long long)count;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
- (id)getDataForKey:(id)a0;

@end
