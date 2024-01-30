@class NSString, NSMutableDictionary;

@interface PKVectorTimestamp : NSObject <NSCopying, CHStrokeProviderVersion> {
    NSMutableDictionary *_clock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithData:(id)a0;
- (BOOL)isEmpty;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithArchive:(const void *)a0;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)compareTo:(id)a0;
- (id)init;
- (id)serialize;
- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)a0;
- (unsigned long long)clockForUUID:(id)a0;
- (void)incrementClockForUUID:(id)a0;
- (void)mergeWithTimestamp:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (long long)compareClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (void)unionClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;

@end
