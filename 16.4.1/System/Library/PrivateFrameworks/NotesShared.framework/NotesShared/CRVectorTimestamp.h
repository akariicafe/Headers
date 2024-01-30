@class NSString, NSMutableDictionary;

@interface CRVectorTimestamp : NSObject <CRDataType, NSCopying, CRCoding> {
    NSMutableDictionary *_clock;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDocument:(id)a0;
- (void)mergeWith:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)shortDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (unsigned long long)compare:(id)a0;
- (id)init;
- (id)tombstone;
- (void).cxx_destruct;
- (id)allUUIDs;
- (id)clockElementForUUID:(id)a0;
- (unsigned long long)clockForUUID:(id)a0;
- (void)encodeIntoProtobufTimestamp:(void *)a0 coder:(id)a1;
- (void)incrementClockForUUID:(id)a0;
- (id)initWithProtobufTimestamp:(const void *)a0 decoder:(id)a1;
- (void)maxClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)minusVectorTimestamp:(id)a0;
- (void)removeUUID:(id)a0;
- (void)setClock:(unsigned long long)a0 forUUID:(id)a1;
- (void)setClock:(unsigned long long)a0 subclock:(unsigned long long)a1 forUUID:(id)a2;
- (id)sortedUUIDs;
- (unsigned long long)subclockForUUID:(id)a0;
- (id)timestampForReplica:(id)a0;

@end
