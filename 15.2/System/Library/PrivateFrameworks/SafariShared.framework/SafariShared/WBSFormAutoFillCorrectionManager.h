@class WBSFormAutoFillClassificationToCorrectionsTransformer;
@protocol WBSFormAutoFillCorrectionManagerDelegate, WBSFormAutoFillCorrectionsStore;

@interface WBSFormAutoFillCorrectionManager : NSObject {
    id<WBSFormAutoFillCorrectionsStore> _correctionsStore;
    WBSFormAutoFillClassificationToCorrectionsTransformer *_classificationToCorrectionsTransformer;
}

@property (weak, nonatomic) id<WBSFormAutoFillCorrectionManagerDelegate> delegate;

- (id)initWithCorrectionsStore:(id)a0;
- (void).cxx_destruct;
- (void)_setCorrections:(id)a0 forFingerprint:(id)a1 onDomain:(id)a2;
- (id)_feedbackProcessor;
- (void)getCorrectionsForFormFieldFingerprint:(id)a0 onDomain:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCorrectionSet:(id)a0;

@end
