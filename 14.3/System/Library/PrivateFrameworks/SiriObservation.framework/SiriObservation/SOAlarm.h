@class NSUUID, NSURL, NSString;

@interface SOAlarm : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *alarmID;
@property (readonly, copy, nonatomic) NSURL *alarmURL;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;
@property (readonly, nonatomic) unsigned long long repeatSchedule;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isFiring;

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
- (id)initWithAlarmID:(id)a0 alarmURL:(id)a1 title:(id)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 repeatSchedule:(unsigned long long)a5 isEnabled:(BOOL)a6 isFiring:(BOOL)a7;

@end
