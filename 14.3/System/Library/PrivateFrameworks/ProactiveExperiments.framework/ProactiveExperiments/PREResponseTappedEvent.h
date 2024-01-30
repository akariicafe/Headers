@class NSString, NSNumber, PREResponsesGeneratedEvent;

@interface PREResponseTappedEvent : NSObject

@property (retain, nonatomic) PREResponsesGeneratedEvent *responsesGeneratedEvent;
@property (retain, nonatomic) NSString *selectedResponse;
@property (retain, nonatomic) NSNumber *selectedPosition;
@property (nonatomic) unsigned long long timeToTap;
@property (nonatomic) int inputMethod;
@property (nonatomic) BOOL hasQuestionMark;

- (void).cxx_destruct;

@end
