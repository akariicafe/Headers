@class NSString, NSData, NSDate, NSNumber;

@interface HAPMutableKeychainItem : HAPKeychainItem

@property (retain, nonatomic) NSString *accessGroup;
@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *account;
@property (retain, nonatomic) NSData *valueData;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *itemDescription;
@property (nonatomic, getter=isSyncable) BOOL syncable;
@property (retain, nonatomic) NSString *viewHint;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *genericData;

@end
