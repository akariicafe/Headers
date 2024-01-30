@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    int _processIdentifier;
    int _processIdentifierVersion;
    unsigned long long _tick;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (id)initWithPID:(int)a0 version:(int)a1 tick:(unsigned long long)a2;
- (id)generationByIncrementingSelf;
- (void)encodeWithCoder:(id)a0;

@end
