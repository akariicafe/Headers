@class NSUUID;

@interface RTSourceCoreRoutineLearnedLocation : RTSourceCoreRoutine

@property (readonly, nonatomic) NSUUID *identifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
