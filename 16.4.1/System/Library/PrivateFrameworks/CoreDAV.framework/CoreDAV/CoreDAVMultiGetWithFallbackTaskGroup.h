@class NSSet, NSString, CoreDAVContainerMultiGetTask, NSError, NSMutableSet;
@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider;

@interface CoreDAVMultiGetWithFallbackTaskGroup : CoreDAVTaskGroup <CoreDAVContainerMultiGetSubmittable> {
    BOOL _usingMultiGet;
    CoreDAVContainerMultiGetTask *_multiGetTask;
    id /* block */ _getBlock;
    NSMutableSet *_urls;
    NSMutableSet *_parsedContents;
}

@property (readonly, nonatomic) NSSet *missingURLs;
@property (readonly, nonatomic) NSSet *deletedURLs;
@property (readonly, nonatomic) NSSet *parsedContents;
@property (nonatomic) BOOL shouldIgnoreResponseErrors;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) id<CoreDAVTaskManager> taskManager;
@property (nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) double timeoutInterval;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startTaskGroup;
- (void).cxx_destruct;
- (void)_configureAndSubmitTask:(id)a0;
- (void)_fetchOneItem;
- (void)_switchToSingleGetMode;
- (id)initWithURLs:(id)a0 multiGetBlock:(id /* block */)a1 getBlock:(id /* block */)a2 accountInfoProvider:(id)a3 taskManager:(id)a4;

@end
