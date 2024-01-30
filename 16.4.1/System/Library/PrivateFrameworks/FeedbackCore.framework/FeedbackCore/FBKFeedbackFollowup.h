@class NSDate, NSString, NSArray, FBKParticipant, NSOrderedSet, NSSet, FBKFeedback, FBKFilePredicate, NSNumber, FBKUploadTask;

@interface FBKFeedbackFollowup : FBKManagedFeedbackObject <FBKFilerForm>

@property (retain) NSNumber *primitiveType;
@property (retain) NSNumber *primitiveComplete;
@property (retain) NSOrderedSet *primitiveFeedbackFollowupResponses;
@property (retain, nonatomic) FBKFilePredicate *stubFilePredicate;
@property unsigned long long type;
@property (getter=isComplete) BOOL complete;
@property (retain) NSString *displayText;
@property (retain) NSArray *feedbackFollowupResponses;
@property (retain) NSSet *fileMatchers;
@property (retain) NSDate *createdAt;
@property (retain) FBKFeedback *feedback;
@property (retain) NSSet *filePromises;
@property (retain) FBKUploadTask *uploadTask;
@property BOOL serverSideIsComplete;
@property (retain) NSString *fileMatcherIds;
@property (retain) NSDate *updatedAt;
@property (readonly) BOOL isVisible;
@property (retain) FBKParticipant *originator;
@property (readonly) NSString *positiveChoice;
@property (readonly) NSString *negativeChoice;
@property (readonly) NSString *noChoiceText;
@property (readonly) NSString *choiceText;
@property (readonly, nonatomic) BOOL isInformationalFollowup;
@property (readonly, nonatomic) BOOL requiresValidationResponse;
@property (readonly) NSString *platform;
@property (nonatomic) long long filerFormType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (unsigned long long)followupTypeFromString:(id)a0;

- (void)prepareForDeletion;
- (BOOL)needsRefresh;
- (void).cxx_destruct;
- (id)promises;
- (id)targetPlatform;
- (BOOL)hasVisibleFiles;
- (id)allFileMatchers;
- (id)bugSessionsFromOriginalFeedback;
- (id)_textResponsesPredicate;
- (BOOL)canRespond;
- (BOOL)collectsFiles;
- (id)filerFormID;
- (BOOL)hasVisibleFilesIncludingFileResponses;
- (BOOL)isServerSideComplete;
- (BOOL)isUploadingFiles;
- (id)matcherPredicates;
- (BOOL)requiresComments;
- (id)respondedToAt;
- (void)setPropertiesFromJSONObject:(id)a0;
- (long long)textResponsesCount;
- (id)textResponsesSummary;
- (id)validationResponse;
- (id)visibleFileNamesIncludingResponsesOfTypeFileAndPromisesSorted;
- (id)visibleFilePromises;
- (id)visibleFilePromisesForResponsesAndPromisesByName;
- (id)visibleFileResponses;
- (id)visibleResponses;
- (id)visibleSortedFilePromises;

@end
