@class NSString;

@interface PHAPhotosChallengeTask : NSObject <PHATask>

@property (nonatomic) long long questionOptions;
@property (nonatomic) long long limit;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double period;
@property (readonly, nonatomic) unsigned long long version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)currentQuestionsKVSDataFromGraphManager:(id)a0;
+ (BOOL)postNewQuestionsNotificationIfNeededWithGraphManager:(id)a0 notificationDate:(id)a1;
+ (BOOL)postSubmissionNotificationIfNeededWithGraphManager:(id)a0 notificationDate:(id)a1;
+ (void)removeCurrentKVSDataFromGraphManager:(id)a0;

- (BOOL)shouldRunWithGraphManager:(id)a0;
- (BOOL)currentPlatformIsSupported;
- (id)init;
- (BOOL)runWithGraphManager:(id)a0 progressReporter:(id)a1 error:(id *)a2;

@end
