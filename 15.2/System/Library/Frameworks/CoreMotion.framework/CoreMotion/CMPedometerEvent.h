@class NSDate;

@interface CMPedometerEvent : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long type;

+ (id)eventStringFromType:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithEventDate:(id)a0 type:(long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
