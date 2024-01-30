@class NSUUID, NSDate;

@interface RTProximityEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *eventID;
@property (readonly, nonatomic) NSDate *startDate;
@property (nonatomic) NSDate *endDate;
@property (readonly, nonatomic) long long proximity;
@property (readonly, nonatomic) long long relationship;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEventID:(id)a0 startDate:(id)a1 endDate:(id)a2 relationship:(long long)a3 proximity:(long long)a4;

@end
