@class NSString;

@interface AXTypingPrediction : NSObject

@property (copy, nonatomic) NSString *fullWord;
@property (copy, nonatomic) NSString *textToInsert;
@property (copy, nonatomic) NSString *prefix;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeToReplace;
@property (nonatomic) double probability;

- (void).cxx_destruct;
- (id)description;

@end
