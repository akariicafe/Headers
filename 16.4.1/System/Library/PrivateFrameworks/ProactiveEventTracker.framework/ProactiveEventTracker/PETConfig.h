@class NSDictionary;

@interface PETConfig : NSObject {
    NSDictionary *_messageGroups;
}

@property (readonly) unsigned long long version;
@property (readonly) NSDictionary *configDictionary;

- (id)bucketsForMessageName:(id)a0;
- (double)deviceSamplingForMessageName:(id)a0 isSeed:(BOOL)a1;
- (double)messageSamplingForMessageName:(id)a0;
- (BOOL)isTVOSEnabledForMessageName:(id)a0 messageGroup:(id)a1;
- (id)_configForMessageName:(id)a0;
- (id)_whitelistHelper:(id)a0;
- (id)whitelistForMessageName:(id)a0;
- (id)initWithFile:(id)a0;
- (void)_enumerateGroupConfigsWithBlock:(id /* block */)a0;
- (unsigned long long)samplingLimitForMessageGroup:(id)a0;
- (BOOL)shouldUploadToParsec;
- (BOOL)isAggregatedForMessageName:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)shouldUploadToFBFv2;
- (id)nestedFieldsForMessageName:(id)a0;
- (BOOL)shouldUploadToFBFv2ForCarryAndSeed;
- (unsigned long long)sigFigsForMessageName:(id)a0;
- (BOOL)isChinaEnabledForMessageName:(id)a0 messageGroup:(id)a1;
- (id)_nestedFieldsHelper:(id)a0;
- (id)groupForMessageName:(id)a0;
- (void).cxx_destruct;
- (void)writeToFile:(id)a0;
- (id)_groupConfigForMessageName:(id)a0;

@end
