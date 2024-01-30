@interface NSPersistentHistoryToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)storeTokens;
- (void)encodeWithCoder:(id)a0;

@end
