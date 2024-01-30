@class NSProgress, NSError, NSString;

@interface GEOMapDataSubscriptionState : NSObject <GEOXPCSerializable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _loadState;
    NSProgress *_progress;
    NSError *_lastError;
    unsigned long long _dataCount;
    unsigned long long _dataSize;
}

@property (readonly, nonatomic) long long loadState;
@property (readonly, nonatomic) NSProgress *downloadProgress;
@property (readonly, nonatomic) NSError *lastError;
@property (readonly, nonatomic) unsigned long long downloadedDataCount;
@property (readonly, nonatomic) unsigned long long downloadedDataSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
