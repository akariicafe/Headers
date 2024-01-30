@class NSString, NSMutableDictionary;

@interface CNAutocompleteAggdProbe : NSObject <CNAutocompleteProbe>

@property (retain, nonatomic) NSMutableDictionary *setData;
@property (retain, nonatomic) NSMutableDictionary *addData;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *keyPrefix;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preparedBundleIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)fullKey:(id)a0;
- (id)initWithKeyPrefix:(id)a0;
- (id)initWithKeyPrefix:(id)a0 bundleIdentifier:(id)a1;
- (void)recordAddValue:(id)a0 forKey:(id)a1;
- (void)recordSetValue:(id)a0 forKey:(id)a1;
- (void)sendData;

@end
