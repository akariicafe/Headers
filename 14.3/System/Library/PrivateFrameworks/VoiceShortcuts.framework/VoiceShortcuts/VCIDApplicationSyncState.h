@class NSString, NSDictionary, NSDate;

@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *checksum;
@property (copy, nonatomic) NSDate *registeredDate;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
