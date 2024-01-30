@class NSSet, NSMutableDictionary;

@interface NBExclusionListManager : NSObject

@property (nonatomic) BOOL hasReadConfiguration;
@property (retain, nonatomic) NSSet *excludedPerGizmoDomains;
@property (retain, nonatomic) NSMutableDictionary *excludedPerGizmoDomainSettings;

- (void).cxx_destruct;
- (void)purgeCache;
- (void)readConfigurationIfNeeded;
- (id)excludedKeysInDomain:(id)a0;

@end
