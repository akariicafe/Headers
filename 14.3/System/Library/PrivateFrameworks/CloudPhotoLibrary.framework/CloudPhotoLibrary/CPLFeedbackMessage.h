@class NSString, CPLServerFeedbackMessage, NSDate;

@interface CPLFeedbackMessage : NSObject {
    NSDate *_creationDate;
}

@property (readonly, nonatomic) NSString *feedbackType;
@property (readonly, nonatomic) CPLServerFeedbackMessage *serverMessage;

+ (id)feedbackType;

- (id)init;
- (void).cxx_destruct;

@end
