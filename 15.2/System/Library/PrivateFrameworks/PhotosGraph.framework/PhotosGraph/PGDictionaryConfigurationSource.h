@class NSDictionary, NSString;

@interface PGDictionaryConfigurationSource : NSObject <PGConfigurationSource>

@property (copy, nonatomic) NSDictionary *configurationData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithDictionary:(id)a0;

@end
