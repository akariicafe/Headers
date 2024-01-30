@class NSArray, HDProfile, HDEntityEncoder, HDDataProvenanceCache;
@protocol HDSyncMessageHandler;

@interface _HDDataEntitySyncMessageBuilder : NSObject {
    HDProfile *_profile;
    Class _entityClass;
    struct { int minimum; int current; } _entityVersion;
    HDDataProvenanceCache *_provenanceCache;
    HDEntityEncoder *_entityEncoder;
    id<HDSyncMessageHandler> _messageHandler;
    long long _maxEncodedBytesPerChangeSet;
    long long _maxEncodedBytesPerChange;
    long long _totalEncodedBytes;
    long long _currentEncodedBytes;
    long long _lastEntityAnchor;
    long long _sequence;
    BOOL _hasEncodedAnyObject;
    BOOL _didSendFinal;
}

@property (readonly, copy, nonatomic) NSArray *orderedProperties;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithProfile:(id)a0 transaction:(id)a1 entityClass:(Class)a2 version:(struct { int x0; int x1; })a3 provenanceCache:(id)a4 encodingOptions:(id)a5 messageHandler:(id)a6 bytesPerChangeSet:(long long)a7 bytesPerChange:(long long)a8;
- (long long)addEntity:(id)a0 row:(struct HDSQLiteRow { } *)a1 anchor:(long long)a2 error:(id *)a3;
- (BOOL)finishAndFlushWithError:(id *)a0;

@end
