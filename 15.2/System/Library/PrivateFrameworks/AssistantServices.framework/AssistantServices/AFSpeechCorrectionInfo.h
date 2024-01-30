@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long alternativeSelectionCount;
@property (nonatomic) long long characterModificationCount;
@property (nonatomic) long long characterInsertionCount;
@property (nonatomic) long long characterSubstitutionCount;
@property (nonatomic) long long characterDeletionCount;
@property (copy, nonatomic) NSString *correctedText;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
