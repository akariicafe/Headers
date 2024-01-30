@class NSString;

@interface CXPlayDTMFCallAction : CXCallAction

@property (copy, nonatomic) NSString *digits;
@property (nonatomic) long long type;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCallUUID:(id)a0 digits:(id)a1 type:(long long)a2;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
