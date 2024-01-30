@class NSString;

@interface _SWCApplicationIdentifier : NSObject <SWCRedactedDescription, NSCopying, NSSecureCoding> {
    unsigned long long _hash;
}

@property (class, readonly, getter=isCaseSensitive) BOOL caseSensitive;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *rawValue;
@property (readonly) NSString *prefix;
@property (readonly) NSString *bundleIdentifier;
@property (readonly, getter=isValid) BOOL valid;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)redactedDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (id)UUIDRepresentation;
- (id)initForBundleRecord:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
