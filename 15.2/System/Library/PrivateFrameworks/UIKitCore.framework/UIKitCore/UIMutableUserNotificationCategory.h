@class NSString;

@interface UIMutableUserNotificationCategory : UIUserNotificationCategory

@property (copy, nonatomic) NSString *identifier;

- (void)setActions:(id)a0 forContext:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
