@class FCCloudContext, FCUserVector, FCAsyncSerialQueue, NSDate, NSString;

@interface FCUserVectorManager : NSObject <FCAppActivityObserving>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCUserVector *userVector;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_applicationDidEnterBackground;
- (void)_fetchUserVector:(id /* block */)a0;
- (void)activityObservingApplicationWillTerminate;
- (id)initWithContext:(id)a0;
- (void)_cacheGSToken;
- (void)activityObservingApplicationWindowDidBecomeForeground;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)_submitPersonalizationVector;
- (void)_applicationDidEnterForeground;
- (void).cxx_destruct;

@end
