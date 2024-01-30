@class NSString;

@interface DIIdentityIntentToStore : NSObject <NSCopying>

@property (class, readonly) DIIdentityIntentToStore *willNotStoreIntent;
@property (class, readonly) DIIdentityIntentToStore *mayStoreIntent;

@property (readonly, retain) NSString *identifier;

+ (id)mayStoreIntentForDays:(long long)a0;

- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;

@end
