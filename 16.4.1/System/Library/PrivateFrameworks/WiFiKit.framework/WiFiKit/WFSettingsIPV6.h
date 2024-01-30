@class NSArray, NSString, NSDictionary;

@interface WFSettingsIPV6 : NSObject <WFSettingsPersistable>

@property (nonatomic) long long method;
@property (retain, nonatomic) NSArray *prefixLengths;
@property (retain, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSString *router;
@property (retain, nonatomic) NSDictionary *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)automaticConfig;
+ (id)linkLocalConfig;

- (id)protocol;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)initWithMethod:(long long)a0 addresses:(id)a1 prefixLengths:(id)a2 router:(id)a3;

@end
