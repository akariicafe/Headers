@class NSString, NSNumber, NSDate;

@interface VSKeychainGenericPassword : VSKeychainItem

@property (copy, nonatomic) NSString *accessGroup;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *itemDescription;
@property (copy, nonatomic) NSString *comment;
@property (copy, nonatomic) NSNumber *creatorCode;
@property (copy, nonatomic) NSNumber *typeCode;
@property (copy, nonatomic) NSString *label;
@property (nonatomic, getter=isSynchronizable) BOOL synchronizable;
@property (copy, nonatomic) NSString *viewHint;
@property (nonatomic, getter=isInvisible) BOOL invisible;
@property (nonatomic, getter=isNegative) BOOL negative;
@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSString *service;
@property (copy, nonatomic) NSString *generic;

- (id)_faultWhileAccessingPrimitiveValueForKey:(id)a0;
- (void)_notifyWhileSettingPrimitiveValue:(id)a0 forKey:(id)a1;

@end
