@class NSString, NSNotificationCenter;

@interface AlgosScoreHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    BOOL active;
    NSNotificationCenter *notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)read:(id)a0 returnedValues:(id)a1;
- (int)configureInstance:(id)a0;
- (BOOL)noteSymptom:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)processEventFor:(id)a0 withScore:(double)a1;

@end
