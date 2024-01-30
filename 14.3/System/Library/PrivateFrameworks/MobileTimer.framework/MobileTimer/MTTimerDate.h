@class NSString, NSDate;

@interface MTTimerDate : NSObject <MTDictionarySerializable, MTTimerTime>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) double remainingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDate:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToTime:(id)a0;
- (id)initWithDate:(id)a0 currentDateProvider:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;

@end
