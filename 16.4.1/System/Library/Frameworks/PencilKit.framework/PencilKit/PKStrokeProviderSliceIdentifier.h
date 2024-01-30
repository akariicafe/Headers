@class NSUUID, NSString;

@interface PKStrokeProviderSliceIdentifier : NSObject <CHStrokeIdentifier>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *strokeUUID;
@property (readonly, nonatomic) double tStart;
@property (readonly, nonatomic) double tEnd;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 tStart:(double)a1 tEnd:(double)a2;

@end
