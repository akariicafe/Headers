@class PETEventTracker2;

@interface SGDetectedAttributeMetrics : NSObject

@property (retain, nonatomic) PETEventTracker2 *pet2Tracker;

+ (id)instance;
+ (void)_recordExtractionEventFromSource:(struct SGMDocumentType_ { unsigned long long x0; })a0 foundInSignature:(BOOL)a1 isDDSignature:(BOOL)a2 detailType:(struct SGMContactDetailType_ { unsigned long long x0; })a3 outcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a4 foundInCNContact:(struct SGMContactDetailOwner_ { unsigned long long x0; })a5 modelVersion:(id)a6 isUnlikelyPhone:(BOOL)a7 sigSource:(struct SGMContactDetailExtractionSignatureSource_ { unsigned long long x0; })a8;
+ (void)_recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a0 detailType:(struct SGMContactDetailType_ { unsigned long long x0; })a1 fromMessage:(id)a2 foundInSignature:(BOOL)a3 isDDSignature:(BOOL)a4 detailType:(unsigned long long)a5 detailValue:(id)a6 modelVersion:(id)a7 isUnlikelyPhone:(BOOL)a8;
+ (id)nameForDataDetectorMatch:(id)a0 withValue:(id)a1;
+ (void)recordBirthdayExtractionAccuracy:(unsigned char)a0 withOffset:(id)a1 withModelVersion:(id)a2 isFromCongratulation:(unsigned char)a3 didRegexTrigger:(unsigned char)a4 didResponseKitTrigger:(unsigned char)a5;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a0 forDetectionsInMessage:(id)a1 signatureRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 isDDSignature:(BOOL)a3;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a0 fromMessage:(id)a1 foundInSignature:(BOOL)a2 isDDSignature:(BOOL)a3 detection:(id)a4;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a0 fromMessage:(id)a1 foundInSignature:(BOOL)a2 isDDSignature:(BOOL)a3 match:(id)a4 foundInCNContact:(struct SGMContactDetailOwner_ { unsigned long long x0; })a5 modelVersion:(id)a6 isUnlikelyPhone:(BOOL)a7;
+ (void)recordExtractionOutcome:(struct SGMContactDetailExtractionOutcome_ { unsigned long long x0; })a0 fromMessage:(id)a1 foundInSignature:(BOOL)a2 isDDSignature:(BOOL)a3 match:(id)a4 modelVersion:(id)a5 isUnlikelyPhone:(BOOL)a6;
+ (void)recordSelfIdModelScore:(BOOL)a0 model:(int)a1 supervision:(int)a2;
+ (void)recordSentContactDetailWithMessage:(id)a0 match:(id)a1 found:(struct SGMContactDetailFoundIn_ { unsigned long long x0; })a2;
+ (id)tokenizeMessageContent:(id)a0;

- (id)initWithTracker:(id)a0;
- (void).cxx_destruct;

@end
