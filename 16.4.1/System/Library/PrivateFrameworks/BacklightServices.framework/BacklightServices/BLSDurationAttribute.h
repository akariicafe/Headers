@class NSString;

@interface BLSDurationAttribute : BLSAttribute <BSXPCCoding>

@property (readonly, nonatomic) double duration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)timeoutAfterInterval:(double)a0;
+ (id)cancelAfterInterval:(double)a0;
+ (id)warnAfterInterval:(double)a0;

- (id)initWithDuration:(double)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)canBePaused;

@end
