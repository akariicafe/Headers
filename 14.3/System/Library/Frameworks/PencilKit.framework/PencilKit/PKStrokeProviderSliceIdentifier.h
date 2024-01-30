@class NSUUID, NSString;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double tStart;
@property (readonly, nonatomic) double tEnd;
@property (readonly, nonatomic) NSUUID *strokeUUID;
@property (readonly, nonatomic) struct _PKStrokeID { unsigned int clock; unsigned char replicaUUID[16]; unsigned int subclock; } version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 version:(struct _PKStrokeID { unsigned int x0; unsigned char x1[16]; unsigned int x2; })a1 tStart:(double)a2 tEnd:(double)a3;

@end
