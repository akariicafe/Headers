@class NSArray, HDProfile, HDEntityEncoder, HDDataProvenanceCache;
@protocol HDSyncMessageHandler;

@interface _HDDataEntitySyncMessageBuilder : NSObject {
    HDProfile *_profile;
    Class _entityClass;
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

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithProfile:(id)a0 transaction:(id)a1 entityClass:(Class)a2 provenanceCache:(id)a3 encodingOptions:(id)a4 messageHandler:(id)a5 bytesPerChangeSet:(long long)a6 bytesPerChange:(long long)a7;
- (long long)addEntity:(id)a0 row:(struct HDSQLiteRow { } *)a1 anchor:(long long)a2 error:(id *)a3;
- (BOOL)finishAndFlushWithError:(id *)a0;
- (long long)_addEntity:(id)a0 row:(struct HDSQLiteRow { } *)a1 anchor:(long long)a2 provenance:(id)a3;
- (BOOL)_sendCurrentCollectionIsFinal:(BOOL)a0 error:(id *)a1;
- (long long)_addCodableRepresentation:(id)a0 encodedSize:(long long)a1 anchor:(long long)a2 provenance:(id)a3 error:(id *)a4;

@end
