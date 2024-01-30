@class NSDictionary, NSOrderedSet, NSDate;

@interface SOAlarmsSnapshot : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, copy, nonatomic) NSDictionary *alarmsByID;
@property (readonly, copy, nonatomic) NSOrderedSet *firingAlarmIDs;
@property (readonly, copy, nonatomic) NSOrderedSet *dismissedAlarmIDs;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDate:(id)a0 alarmsByID:(id)a1 firingAlarmIDs:(id)a2 dismissedAlarmIDs:(id)a3;

@end
