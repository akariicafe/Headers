@class NSSet, NSMutableDictionary;

@interface NBExclusionListManager : NSObject

@property (nonatomic) BOOL hasReadConfiguration;
@property (retain, nonatomic) NSSet *excludedPerGizmoDomains;
@property (retain, nonatomic) NSMutableDictionary *excludedPerGizmoDomainSettings;

- (void)purgeCache;
- (void).cxx_destruct;
- (id)excludedKeysInDomain:(id)a0;
- (void)readConfigurationIfNeeded;

@end
