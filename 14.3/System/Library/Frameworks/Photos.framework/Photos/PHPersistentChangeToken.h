@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPersistentHistoryToken *persistentHistoryToken;
@property (readonly, nonatomic) int version;

+ (id)currentTokenForContext:(id)a0;
+ (id)tokenWithPersistentHistoryToken:(id)a0;
+ (int)currentVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithPersistentHistoryToken:(id)a0;
- (BOOL)isEqualToPersistentChangeToken:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0 version:(int)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
