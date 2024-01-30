@interface _SWCGeneration : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    int _processIdentifier;
    int _processIdentifierVersion;
    unsigned long long _tick;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)generationByIncrementingSelf;
- (id)initWithPID:(int)a0 version:(int)a1 tick:(unsigned long long)a2;

@end
