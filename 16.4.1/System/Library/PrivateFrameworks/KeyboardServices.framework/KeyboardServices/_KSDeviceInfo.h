@class NSString;

@interface _KSDeviceInfo : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *swVersion;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *modelDisplayName;
@property (nonatomic) BOOL needsUpdate;

+ (id)ksDecviceWithName:(id)a0 swVersion:(id)a1 model:(id)a2 modelDisplayName:(id)a3;
+ (id)ksDecviceWithiCloudDeviceInfo:(id)a0;
+ (id)ksDeviceWithName:(id)a0 needsUpgrade:(BOOL)a1;
+ (id)ksDeviceWithName:(id)a0 swVersion:(id)a1;

- (void).cxx_destruct;

@end
