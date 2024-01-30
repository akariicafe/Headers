@class NSDate;

@interface CMSedentaryTimerData : NSObject <NSSecureCoding, NSCopying> {
    double fStartDate;
    double fFiredDate;
    long long fAlarmType;
    BOOL fDidWake;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *firedDate;
@property (readonly, nonatomic) long long alarmType;
@property (readonly, nonatomic) BOOL didWake;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithStartDate:(double)a0 firedDate:(double)a1 alarmType:(long long)a2 didWake:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
