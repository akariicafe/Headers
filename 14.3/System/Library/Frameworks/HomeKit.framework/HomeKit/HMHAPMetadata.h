@class NSDictionary, NSNumber, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge>

@property (retain, nonatomic) NSDictionary *hapChrMap;
@property (retain, nonatomic) NSDictionary *hapSvcMap;
@property (retain, nonatomic) NSDictionary *hapCategoryMap;
@property (retain, nonatomic) NSNumber *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getSharedInstance;

- (void).cxx_destruct;
- (id)serviceTypeDescription:(id)a0;
- (BOOL)shouldNotCacheCharacteristicOfType:(id)a0;
- (id)characteristicTypeDescription:(id)a0;
- (id)categoryForCategoryType:(id)a0;
- (BOOL)applyProtoBufData:(id)a0 callbackOperations:(id)a1;
- (id)categoryForNumber:(id)a0;

@end
