@class NSString, CPLServerFeedbackMessage, NSDate;

@interface CPLFeedbackMessage : NSObject {
    NSDate *_creationDate;
}

@property (readonly, nonatomic) NSString *libraryIdentifier;
@property (readonly, nonatomic) NSString *libraryIdentifierDescription;
@property (readonly, nonatomic) NSString *feedbackType;
@property (readonly, nonatomic) CPLServerFeedbackMessage *serverMessage;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithLibraryIdentifier:(id)a0;

@end
