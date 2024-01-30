@class NSString, CHDelegateController;
@protocol CHConfigurationDelegate, CHKeyValueDataSource;

@interface CHConfiguration : NSObject <CHConfiguration>

@property (readonly, nonatomic) CHDelegateController<CHConfigurationDelegate> *delegateController;
@property (readonly, nonatomic) id<CHKeyValueDataSource> dataSource;
@property (readonly, nonatomic, getter=isCloudKitEnabled) BOOL cloudKitEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)numberForKey:(id)a0;
- (void)addDelegate:(id)a0 queue:(id)a1;
- (id)initWithDataSource:(id)a0;
- (void)removeDelegate:(id)a0;
- (void).cxx_destruct;

@end
