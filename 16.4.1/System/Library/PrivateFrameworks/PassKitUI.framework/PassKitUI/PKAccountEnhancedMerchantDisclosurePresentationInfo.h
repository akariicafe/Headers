@class NSString, PKAccountEnhancedMerchant;
@protocol NSCopying;

@interface PKAccountEnhancedMerchantDisclosurePresentationInfo : NSObject <PKIdentifiable>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *disclosures;
@property (retain, nonatomic) PKAccountEnhancedMerchant *enhancedMerchant;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccountEnhancedMerchant:(id)a0;
- (BOOL)isEqualToAccountEnhancedMerchantDisclosure:(id)a0;

@end
