@class NSString;

@interface CPLQuarantineFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) Class recordClass;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithClass:(Class)a0 reason:(id)a1 libraryIdentifier:(id)a2;
- (id)serverMessage;

@end
