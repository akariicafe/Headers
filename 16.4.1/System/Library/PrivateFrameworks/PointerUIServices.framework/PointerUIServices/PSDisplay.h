@class NSString;

@interface PSDisplay : NSObject <NSCopying, NSSecureCoding> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;

- (id)hardwareIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithHardwareIdentifier:(id)a0;
- (void).cxx_destruct;

@end
