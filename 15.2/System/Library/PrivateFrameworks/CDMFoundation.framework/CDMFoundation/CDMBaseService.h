@class NSString, NSSet, CDMConfig, NSHashTable;

@interface CDMBaseService : NSObject <CDMService> {
    CDMConfig *_config;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) long long serviceState;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSSet *supportedCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)publish:(id)a0;
- (id)initWithConfig:(id)a0;
- (id)createErrorWithCode:(long long)a0 description:(id)a1;
- (id)createSetupResponseCommand;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (void)request:(id)a0 withCallback:(id /* block */)a1;

@end
