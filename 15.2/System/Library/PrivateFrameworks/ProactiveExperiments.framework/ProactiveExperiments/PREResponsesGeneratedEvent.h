@class NSArray, NSString;

@interface PREResponsesGeneratedEvent : NSObject

@property (retain, nonatomic) NSArray *responses;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *locale;
@property (nonatomic) BOOL isCached;
@property (nonatomic) unsigned long long responseTimePerf;
@property (nonatomic) unsigned long long messageCharCount;
@property (nonatomic) BOOL hasQuestionMark;
@property (nonatomic) unsigned long long responseGenerationTime;
@property (nonatomic) int generationStatus;

- (void).cxx_destruct;

@end
