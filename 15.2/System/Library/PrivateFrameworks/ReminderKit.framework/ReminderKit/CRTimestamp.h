@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding>

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long counter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)compare:(id)a0;
- (id)shortDescription;
- (void)realizeLocalChangesIn:(id)a0;
- (void)mergeWith:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (BOOL)isEqualToTimestamp:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deltaSince:(id)a0 in:(id)a1;
- (void)encodeWithCRCoder:(id)a0;
- (void)setDocument:(id)a0;
- (void)walkGraph:(id /* block */)a0;
- (id)tombstone;
- (void)encodeIntoProtobufTimestamp:(void *)a0 coder:(id)a1;
- (id)initWithProtobufTimestamp:(const void *)a0 decoder:(id)a1;
- (id)initWithReplica:(id)a0 andCounter:(long long)a1;
- (id)nextTimestampForReplica:(id)a0;
- (id)nextTimestamp;
- (id)earlierTimestamp:(id)a0;
- (id)laterTimestamp:(id)a0;

@end
