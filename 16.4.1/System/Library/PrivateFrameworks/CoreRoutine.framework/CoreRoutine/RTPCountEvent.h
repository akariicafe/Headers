@class NSUUID, NSDate;

@interface RTPCountEvent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *eventID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long totalCount;
@property (readonly, nonatomic) unsigned long long familyCount;
@property (readonly, nonatomic) unsigned long long friendsCount;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithEventID:(id)a0 startDate:(id)a1 endDate:(id)a2 totalCount:(unsigned long long)a3 familyCount:(unsigned long long)a4 friendsCount:(unsigned long long)a5;

@end
