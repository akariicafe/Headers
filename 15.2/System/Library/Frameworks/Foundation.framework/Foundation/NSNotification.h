@class NSString, NSDictionary;

@interface NSNotification : NSObject <NSCopying, NSCoding>

@property (readonly, copy) NSString *name;
@property (readonly, retain) id object;
@property (readonly, copy) NSDictionary *userInfo;

+ (id)notificationWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)notificationWithName:(id)a0 object:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithName:(id)a0 object:(id)a1 userInfo:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
