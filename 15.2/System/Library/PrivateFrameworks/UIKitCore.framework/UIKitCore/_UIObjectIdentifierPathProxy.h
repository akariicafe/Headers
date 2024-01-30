@class NSString;

@interface _UIObjectIdentifierPathProxy : NSObject <NSSecureCoding> {
    NSString *_identifierPath;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
