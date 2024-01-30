@class NSString;

@interface CoreIDV.IdentityIntentToStoreRawValueKeys : NSObject

@property (class, nonatomic, readonly) NSString *willNotStore;
@property (class, nonatomic, readonly) NSString *mayStore;

+ (id)mayStoreForDays:(long long)a0;

- (id)init;
- (void).cxx_destruct;

@end
