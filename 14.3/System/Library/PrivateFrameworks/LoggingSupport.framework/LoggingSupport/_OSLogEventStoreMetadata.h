@class NSUUID, _OSLogEventStoreTimeRef;

@interface _OSLogEventStoreMetadata : NSObject {
    _OSLogEventStoreTimeRef *_ttls[5];
}

@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestPersist;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSpecial;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestSignpost;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestHighVolume;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *oldestLive;
@property (readonly, nonatomic) _OSLogEventStoreTimeRef *end;
@property (readonly, nonatomic) NSUUID *archiveUUID;
@property (readonly, nonatomic) NSUUID *sourceUUID;

- (void).cxx_destruct;
- (id)initWithCollection:(id)a0 localStorePlist:(id)a1 liveDataDescriptor:(int)a2;
- (id)timeRefForTTLClass:(unsigned char)a0;
- (id)initWithDictionary:(id)a0;

@end
