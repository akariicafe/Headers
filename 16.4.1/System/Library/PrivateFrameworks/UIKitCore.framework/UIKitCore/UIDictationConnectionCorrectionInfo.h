@class NSString, NSDictionary;

@interface UIDictationConnectionCorrectionInfo : NSObject

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic) int characterModificationCount;
@property (nonatomic) int characterInsertionCount;
@property (nonatomic) int characterDeletionCount;
@property (nonatomic) int characterSubstitutionCount;
@property (copy, nonatomic) NSString *correctedText;
@property (copy, nonatomic) NSDictionary *recognizedTextInfo;
@property (copy, nonatomic) NSDictionary *userEditedTextInfo;
@property (copy, nonatomic) NSDictionary *alternativesSelectedInfo;

- (void).cxx_destruct;

@end
