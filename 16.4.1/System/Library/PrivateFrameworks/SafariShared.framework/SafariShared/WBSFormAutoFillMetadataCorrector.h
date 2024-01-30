@class WBSFormAutoFillClassificationToCorrectionsTransformer, NSString, NSMutableSet, NSCache;
@protocol WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillMetadataCorrector : NSObject {
    id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
    NSCache *_fingerprintsToCorrections;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
    NSMutableSet *_correctedFormMetadataID;
}

@property (readonly, nonatomic) NSString *domain;

- (id)initWithDomain:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)bestAvailableMetadataFromControlMetadata:(id)a0;
- (id)bestAvailableMetadataFromMetadata:(id)a0;
- (void)enqueueCorrectionsRequestForFormMetadata:(id)a0 completionHandler:(id /* block */)a1;
- (void)_commonInitWithDomain:(id)a0 correctionsStore:(id)a1;
- (BOOL)hasAttemptedToCorrectMetadata:(id)a0;

@end
