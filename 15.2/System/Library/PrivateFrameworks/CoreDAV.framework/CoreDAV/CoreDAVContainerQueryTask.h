@class NSSet, NSString;
@protocol CoreDAVContainerQueryTaskDelegate;

@interface CoreDAVContainerQueryTask : CoreDAVTask {
    NSSet *_searchTerms;
    unsigned long long _searchLimit;
    NSString *_appSpecificNamespace;
    NSString *_appSpecificQueryCommand;
    NSString *_appSpecificDataProp;
    Class _appSpecificDataItemClass;
}

@property (weak, nonatomic) id<CoreDAVContainerQueryTaskDelegate> delegate;

+ (id)_copySearchTermsFromSearchString:(id)a0;

- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)requestBody;
- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchTerms:(id)a0 searchLimit:(unsigned long long)a1 atURL:(id)a2 appSpecificDataItemClass:(Class)a3;
- (void)addFiltersToXMLData:(id)a0;
- (id)initWithSearchString:(id)a0 searchLimit:(unsigned long long)a1 atURL:(id)a2 appSpecificDataItemClass:(Class)a3;
- (id)_initWithSearchTerms:(id)a0 searchLimit:(unsigned long long)a1 atURL:(id)a2 appSpecificDataItemClass:(Class)a3;

@end
