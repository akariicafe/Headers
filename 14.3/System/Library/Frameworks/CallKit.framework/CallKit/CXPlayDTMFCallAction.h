@class NSString;

@interface CXPlayDTMFCallAction : CXCallAction

@property (copy, nonatomic) NSString *digits;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;
- (id)initWithCallUUID:(id)a0 digits:(id)a1 type:(long long)a2;

@end
