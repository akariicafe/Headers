@class CFServiceHelper, NSString, CFCommandQueuer;

@interface CFCommandProcessor : NSObject <CFCommandProcessing>

@property (retain, nonatomic) CFServiceHelper *serviceHelper;
@property (retain, nonatomic) CFCommandQueuer *commandQueuer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)handleOneWayCommand:(id)a0;
- (void)handleCommand:(id)a0 reply:(id /* block */)a1;
- (void)isDeviceLockedWithPasscodeWithCompletion:(id /* block */)a0;
- (id)initWithServiceHelper:(id)a0 commandQueuer:(id)a1;

@end
