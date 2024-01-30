@class NSString, MTConvenienceEnvironmentDelegate, MTConfigAMSMetricsDelegate, MTEventRecorderAMSMetricsDelegate;

@interface MTStoreAMSBagDelegatePackage : NSObject <MTDelegatePackage>

@property (copy, nonatomic) id /* block */ hostAppBlock;
@property (retain, nonatomic) MTConfigAMSMetricsDelegate *configDelegate;
@property (retain, nonatomic) MTEventRecorderAMSMetricsDelegate *eventRecorderDelegate;
@property (retain, nonatomic) MTConvenienceEnvironmentDelegate *environmentDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
