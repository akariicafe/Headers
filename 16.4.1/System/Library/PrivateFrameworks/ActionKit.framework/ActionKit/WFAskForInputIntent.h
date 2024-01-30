@class NSString, NSURL, NSDateComponents, NSNumber;

@interface WFAskForInputIntent : INIntent

@property (copy, nonatomic) NSString *question;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *stringAnswer;
@property (copy, nonatomic) NSNumber *numberAnswer;
@property (copy, nonatomic) NSURL *urlAnswer;
@property (copy, nonatomic) NSString *defaultURLAnswer;
@property (copy, nonatomic) NSDateComponents *dateAnswer;
@property (copy, nonatomic) NSDateComponents *timeAnswer;
@property (copy, nonatomic) NSDateComponents *dateAndTimeAnswer;
@property (copy, nonatomic) NSNumber *allowsDecimalNumbers;
@property (copy, nonatomic) NSNumber *allowsNegativeNumbers;
@property (copy, nonatomic) NSNumber *allowsMultilineText;

@end
