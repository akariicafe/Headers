@class NSString, DNDStateService, DNDModeAssertionService;

@interface DNDToggleManager : NSObject {
    DNDModeAssertionService *_modeAssertionService;
    DNDStateService *_stateService;
}

@property (copy, nonatomic) NSString *toggleAssertionIdentifier;

+ (void)initialize;
+ (id)managerForClientIdentifier:(id)a0;

- (void).cxx_destruct;
- (BOOL)toggleToTargetState:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_toggleDNDOffReturningError:(id *)a0;
- (BOOL)_toggleDNDOnReturningError:(id *)a0;
- (id)initWithModeAssertionService:(id)a0 stateService:(id)a1;

@end
