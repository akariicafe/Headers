@class NSString, NSDictionary;

@interface WBSPasswordBreachConfigurationBag : NSObject <WBSRemotePlistSnapshot> {
    NSDictionary *_bag;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)plistDataWithFormat:(unsigned long long)a0;
- (id)initWithBagDictionary:(id)a0;
- (id)firstConfigurationForSupportedProtocolVersion:(unsigned long long)a0 rampIdentifier:(unsigned long long)a1 allowValuesForTesting:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithPlistData:(id)a0 error:(id *)a1;

@end
