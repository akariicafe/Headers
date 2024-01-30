@class NSString;
@protocol CHConfigurationDelegate, CHKeyValueDataSource;

@interface CHConfiguration : NSObject <CHConfiguration>

@property (readonly, nonatomic) id<CHKeyValueDataSource> dataSource;
@property (weak, nonatomic) id<CHConfigurationDelegate> delegate;
@property (readonly, nonatomic, getter=isCloudKitEnabled) BOOL cloudKitEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (id)numberForKey:(id)a0;
- (void).cxx_destruct;

@end
