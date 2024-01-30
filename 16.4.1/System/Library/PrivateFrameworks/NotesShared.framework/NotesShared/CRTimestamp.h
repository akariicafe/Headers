@class NSUUID, NSString;

@interface CRTimestamp : NSObject <CRDataType, CREquatable, NSCopying, CRCoding>

@property (retain, nonatomic) NSUUID *replica;
@property (nonatomic) long long counter;
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
- (BOOL)isEqualToTimestamp:(id)a0;
- (id)initWithCRCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)realizeLocalChangesIn:(id)a0;
- (long long)compare:(id)a0;
- (id)tombstone;
- (void).cxx_destruct;
- (id)laterTimestamp:(id)a0;
- (id)earlierTimestamp:(id)a0;
- (void)encodeIntoProtobufTimestamp:(void *)a0 coder:(id)a1;
- (id)initWithProtobufTimestamp:(const void *)a0 decoder:(id)a1;
- (id)initWithReplica:(id)a0 andCounter:(long long)a1;
- (id)nextTimestamp;
- (id)nextTimestampForReplica:(id)a0;

@end
