@class NSArray, NSDictionary, NSString;

@interface WFSettingsDNS : NSObject <WFSettingsPersistable>

@property (retain, nonatomic) NSArray *serverAddresses;
@property (retain, nonatomic) NSArray *searchDomains;
@property (retain, nonatomic) NSDictionary *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)automaticConfig;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)protocol;
- (id)initWithServerAddresses:(id)a0 searchDomains:(id)a1;

@end
