@class NSString;

@interface NSURLQueryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property (readonly) NSString *value;

+ (id)queryItemWithName:(id)a0 value:(id)a1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
