@class NSString;

@interface TITrialManagerDataSource : NSObject <TITrialManagerDataSource>

@property (readonly, getter=isUseDDSForABTestingEnabled) BOOL useDDSForABTestingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
