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

- (void)dealloc;
- (void)sessionDidConnect:(id)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_limitedUIDidChange:(id)a0;
- (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)a0;
- (void)_contentStyleUpdated:(id)a0;
- (void)_updateContentStyleWithScene:(id)a0;
- (void)_updateLimitedUIStatus;
- (id)initWithDelegate:(id)a0 templateEnvironment:(id)a1;

@end
