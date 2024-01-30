@class NSDictionary, NSString;

@interface PGPlistFileConfigurationSource : NSObject <PGConfigurationSource>

@property (copy, nonatomic) NSDictionary *configurationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithPlistFileURL:(id)a0;

@end
