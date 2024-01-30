@class NRPBDeviceDiffType, NRDeviceDiff;

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NRDeviceDiff *diff;
@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, nonatomic) NRPBDeviceDiffType *protobuf;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDiff:(id)a0 andChangeType:(unsigned long long)a1;
- (unsigned long long)hash;

@end
