@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (readonly, copy) NSString *name;
@property (readonly, retain) id object;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)notificationWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
+ (id)notificationWithName:(id)a0 object:(id)a1;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
