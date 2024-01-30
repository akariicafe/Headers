@class NSSet, NSError, NSString;
@protocol CoreDAVTaskManager, CoreDAVAccountInfoProvider;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
    NSSet *_urls;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property (retain, nonatomic) NSSet *additionalPropElements;
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

- (void).cxx_destruct;
- (id)requestBody;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:(id)a0 onDataItem:(id)a1;
- (id)initWithURLs:(id)a0 atContainerURL:(id)a1 appSpecificDataItemClass:(Class)a2;
- (id)copyDefaultParserForContentType:(id)a0;

@end
