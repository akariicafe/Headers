@class WBSFormAutoFillClassificationToCorrectionsTransformer, NSString, NSDictionary, NSSet, WBSFormMetadata;
@protocol WBSFormFieldClassificationCorrectorDelegate;

@interface WBSFormFieldClassificationCorrector : NSObject {
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSSet *_uniqueIDsOfControlsThatWereAutoFilled;
}

@property (weak, nonatomic) id<WBSFormFieldClassificationCorrectorDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) WBSFormMetadata *formMetadata;
@property (readonly, copy, nonatomic) NSDictionary *formValues;

- (id)init;
- (void).cxx_destruct;
- (id)_classificationCorrectionsForControlWithMetadata:(id)a0 wasIdentifiedAsAddressBookField:(BOOL *)a1;
- (id)initWithDomain:(id)a0 formMetadata:(id)a1 formValues:(id)a2 uniqueIDsOfControlsThatWereAutoFilled:(id)a3;
- (void)processCorrections;

@end
