@class NSString;

@interface _LSEmbeddedApplicationIdentityBookmark : NSObject <NSSecureCoding, NSCopying> {
    BOOL _placeholder;
    NSString *_bundleIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
