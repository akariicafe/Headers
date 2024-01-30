@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *resourceID;
@property (readonly, nonatomic) long long refreshRate;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResourceID:(id)a0 refreshRate:(long long)a1;

@end
