@class NRPBDeviceDiffType, NRDeviceDiff;

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NRDeviceDiff *diff;
@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, nonatomic) NRPBDeviceDiffType *protobuf;

- (id)initWithDiff:(id)a0 andChangeType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
