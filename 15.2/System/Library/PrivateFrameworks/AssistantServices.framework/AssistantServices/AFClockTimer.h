@class NSUUID, NSString, NSURL, NSDate;

@interface AFClockTimer : NSObject <AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible>

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
@property (readonly, copy, nonatomic) NSUUID *timerID;
@property (readonly, copy, nonatomic) NSURL *timerURL;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) double fireTimeInterval;
@property (readonly, copy, nonatomic) NSDate *fireDate;
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

@end
