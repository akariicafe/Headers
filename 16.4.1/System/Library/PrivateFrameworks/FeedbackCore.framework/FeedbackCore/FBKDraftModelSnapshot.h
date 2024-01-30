@class NSArray, NSDictionary;

@interface FBKDraftModelSnapshot : NSObject

@property (nonatomic, readonly) BOOL hasAnyDevices;
@property (nonatomic, readonly) NSArray *allQuestions;
@property (nonatomic, readonly) NSArray *allAttachments;
@property (nonatomic, readonly) NSArray *sections;
@property (retain, nonatomic) NSArray *questionGroups;
@property (retain, nonatomic) NSDictionary *questionGroupIdToQuestions;
@property (retain, nonatomic) NSArray *devices;
@property (retain, nonatomic) NSDictionary *deviceIdToAttachments;

- (void).cxx_destruct;
- (id)rowsForSection:(id)a0;
- (id)initWithQuestionGroups:(id)a0 questions:(id)a1 deviceDiagnostics:(id)a2;

@end
