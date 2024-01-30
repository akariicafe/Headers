@class NSString;

@interface CPLTestFeedbackMessage : CPLFeedbackMessage

@property (readonly, nonatomic) NSString *testMessage;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)serverMessage;
- (id)initWithTestMessage:(id)a0 libraryIdentifier:(id)a1;

@end
