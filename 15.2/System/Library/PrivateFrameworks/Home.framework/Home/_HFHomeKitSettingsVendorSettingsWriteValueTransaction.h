@class NSNumber, NAFuture, NSError, NSDate, HMSetting;

@interface _HFHomeKitSettingsVendorSettingsWriteValueTransaction : NSObject

@property (retain, nonatomic) NAFuture *settingWriteFuture;
@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=hasStarted) BOOL started;
@property (readonly, nonatomic) NSDate *transactionStartDate;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) id previousValue;
@property (readonly, nonatomic) unsigned long long changeType;
@property (readonly, nonatomic) HMSetting *setting;
@property (readonly, nonatomic) NSNumber *transactionNumber;

- (id)descriptionBuilder;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSetting:(id)a0 previousValue:(id)a1 value:(id)a2 changeType:(unsigned long long)a3;

@end
