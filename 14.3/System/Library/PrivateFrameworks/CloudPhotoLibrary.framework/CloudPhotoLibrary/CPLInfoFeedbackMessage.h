@class NSDictionary;

@interface CPLInfoFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSDictionary *info;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)serverMessage;

@end
