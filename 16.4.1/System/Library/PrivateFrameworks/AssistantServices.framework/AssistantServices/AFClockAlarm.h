@class NSUUID, NSString, NSURL, NSDate;

@interface AFClockAlarm : NSObject <AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *itemID;
@property (readonly, nonatomic) NSURL *itemURL;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSUUID *alarmID;
@property (readonly, copy, nonatomic) NSURL *alarmURL;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long hour;
@property (readonly, nonatomic) unsigned long long minute;
@property (readonly, nonatomic) unsigned long long repeatOptions;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, nonatomic) BOOL isSnoozed;
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)buildDictionaryRepresentation;
- (id)init;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithAlarmID:(id)a0 alarmURL:(id)a1 isFiring:(BOOL)a2 title:(id)a3 type:(unsigned long long)a4 hour:(unsigned long long)a5 minute:(unsigned long long)a6 repeatOptions:(unsigned long long)a7 isEnabled:(BOOL)a8 isSnoozed:(BOOL)a9 firedDate:(id)a10 dismissedDate:(id)a11 lastModifiedDate:(id)a12;

@end
