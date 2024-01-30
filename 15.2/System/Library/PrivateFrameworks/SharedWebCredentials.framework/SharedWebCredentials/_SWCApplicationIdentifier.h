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

- (id)initWithString:(id)a0;
- (BOOL)isEqualToApplicationIdentifierIgnoringPrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initForBundleRecord:(id)a0;
- (id)description;
- (id)UUIDRepresentation;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)redactedDescription;
- (unsigned long long)hash;
- (id)debugDescription;

@end
