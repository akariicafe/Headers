@class NSString;

@interface _LSPersonaWithAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString *_personaUniqueString;
    unsigned long long _personaType;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
