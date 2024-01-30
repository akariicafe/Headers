@class NSString, CARSessionStatus, CPSTemplateEnvironment;
@protocol CPSessionConfigurationDelegate;

@interface CPSessionConfiguration : NSObject <CARSessionObserving>

@property (nonatomic) unsigned long long limitedUserInterfaces;
@property (retain, nonatomic) CARSessionStatus *currentStatus;
@property (nonatomic) unsigned long long contentStyle;
@property (weak, nonatomic) CPSTemplateEnvironment *templateEnvironment;
@property (weak, nonatomic) id<CPSessionConfigurationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sessionDidConnect:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)_limitedUIDidChange:(id)a0;
- (void)dealloc;
- (void)_nightModeDidChange:(id)a0;
- (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)a0;
- (void)_updateLimitedUIStatus;
- (void)_updateNightMode;
- (id)initWithDelegate:(id)a0 templateEnvironment:(id)a1;

@end
