@class SFAutoFillOneTimeCode, NSDate;

@interface TOTPGeneratorSnapshot : NSObject

@property (retain, nonatomic) NSDate *startDateOfInterval;
@property (retain, nonatomic) SFAutoFillOneTimeCode *oneTimeCode;

- (void).cxx_destruct;

@end
