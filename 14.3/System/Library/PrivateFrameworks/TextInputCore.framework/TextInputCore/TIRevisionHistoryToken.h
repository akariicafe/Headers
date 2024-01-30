@class NSString;

@interface TIRevisionHistoryToken : NSObject

@property (copy, nonatomic) NSString *tokenInputString;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) struct TITokenID { unsigned int lexicon_id; unsigned int word_id; } tokenID;
@property (copy, nonatomic) NSString *tokenDictionaryString;
@property (copy, nonatomic) NSString *userTyping;
@property (nonatomic) unsigned int usageLearningMask;
@property (nonatomic) unsigned int usageTrackingMask;
@property (nonatomic, getter=isAccepted) BOOL accepted;

- (void).cxx_destruct;
- (id)description;

@end
