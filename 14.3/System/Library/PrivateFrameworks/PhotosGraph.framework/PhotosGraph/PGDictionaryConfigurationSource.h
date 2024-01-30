@class NSDictionary, NSString;

@interface PGDictionaryConfigurationSource : NSObject <PGConfigurationSource>

@property (retain) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)objectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
