@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface IKAppDataStorage : NSObject <IKAppDataStoring> {
    unsigned long long _format;
}

@property (retain, nonatomic) NSMutableDictionary *storageDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (readonly, retain, nonatomic) NSString *filePath;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)setData:(id)a0 forKey:(id)a1;
- (id)keyAtIndex:(unsigned long long)a0;
- (void)removeDataForKey:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)count;
- (void)clear;
- (void).cxx_destruct;
- (id)getDataForKey:(id)a0;
- (id)initWithFilePath:(id)a0 identifier:(id)a1;
- (void)_saveDict:(id)a0;

@end
