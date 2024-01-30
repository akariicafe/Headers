@class NSUUID;

@interface VNObservation : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding> {
    unsigned long long _requestRevision;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic, setter=setUUID:) NSUUID *uuid;
@property (nonatomic) float confidence;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (readonly, nonatomic) unsigned long long requestRevision;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequestRevision:(unsigned long long)a0;

@end
