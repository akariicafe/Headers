@class NSString;

@interface ConfigurationHandler : NSObject <ManagedEventInfoProtocol, SymptomAdditionalProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (id)classRepresentativeForName:(id)a0;
+ (int)read:(id)a0 returnedValues:(id)a1;
+ (id)objectForName:(id)a0;
+ (void)dumpAll;
+ (int)configureItems:(id)a0;
+ (void)setConfigurationObject:(id)a0 forName:(id)a1;

- (BOOL)noteSymptom:(id)a0;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (int)read:(id)a0 returnedValues:(id)a1;
- (id)init;
- (int)configure:(id)a0;
- (id)_configureHandlerClass:(id)a0;
- (void)setAnnotation:(id)a0;
- (void)_dumpState;
- (id)_configureBuildDetails:(id)a0;
- (void)_setAnnotation:(id)a0;

@end
