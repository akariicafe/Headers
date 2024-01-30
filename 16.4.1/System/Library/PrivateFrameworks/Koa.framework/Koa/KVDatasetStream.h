@class NSString, NSMutableArray, NSObject;
@protocol KVDonateService;

@interface KVDatasetStream : NSObject {
    NSObject<KVDonateService> *_service;
    long long _itemType;
    NSString *_name;
    NSMutableArray *_itemBuffers;
    unsigned long long _flushThreshold;
    unsigned long long _bufferSize;
}

@property (readonly, nonatomic) unsigned long long priorVersion;
@property (readonly, nonatomic) unsigned short errorCode;

+ (id)streamWithName:(id)a0 itemType:(long long)a1 service:(id)a2 payload:(unsigned long long)a3;

- (void)finish:(id /* block */)a0;
- (BOOL)addItem:(id)a0 error:(id *)a1;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)_flushItemsWithError:(id *)a0;
- (void)finishWithOptions:(id /* block */)a0;
- (id)initWithName:(id)a0 itemType:(long long)a1 service:(id)a2 payload:(unsigned long long)a3 flushThreshold:(unsigned long long)a4;
- (BOOL)removeItemId:(id)a0 error:(id *)a1;

@end
