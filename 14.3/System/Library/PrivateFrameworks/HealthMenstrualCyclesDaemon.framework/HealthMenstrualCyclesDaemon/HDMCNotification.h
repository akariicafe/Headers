@class NSString;

@interface HDMCNotification : NSObject <NSCopying>

@property (readonly, nonatomic) long long dayIndex;
@property (readonly, copy, nonatomic) NSString *category;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDayIndex:(long long)a0 category:(id)a1;

@end
