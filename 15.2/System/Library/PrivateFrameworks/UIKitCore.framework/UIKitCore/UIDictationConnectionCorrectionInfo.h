@class NSString;

@interface UIDictationConnectionCorrectionInfo : NSObject

@property (nonatomic) int alternativeSelectionCount;
@property (nonatomic) int characterModificationCount;
@property (nonatomic) int characterInsertionCount;
@property (nonatomic) int characterDeletionCount;
@property (nonatomic) int characterSubstitutionCount;
@property (copy, nonatomic) NSString *correctedText;

- (void).cxx_destruct;

@end
