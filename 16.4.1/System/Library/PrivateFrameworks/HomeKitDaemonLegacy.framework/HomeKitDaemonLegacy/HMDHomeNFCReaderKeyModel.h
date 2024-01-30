@class NSData, HMDHomeNFCReaderKey;

@interface HMDHomeNFCReaderKeyModel : HMDBackingStoreModelObject

@property (retain, nonatomic) NSData *encodedNfcReaderKey;
@property (copy, nonatomic) HMDHomeNFCReaderKey *nfcReaderKey;

+ (id)properties;
+ (id)modelIDForHome:(id)a0;
+ (id)defaultModelForHome:(id)a0;

@end
