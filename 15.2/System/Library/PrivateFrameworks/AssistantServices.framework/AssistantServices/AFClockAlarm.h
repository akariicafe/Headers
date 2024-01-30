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

@end
