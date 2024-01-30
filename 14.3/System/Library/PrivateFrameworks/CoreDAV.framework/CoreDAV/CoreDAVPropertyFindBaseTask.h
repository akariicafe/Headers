@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (void).cxx_destruct;
- (id)description;
- (id)additionalHeaderValues;
- (id)parseHints;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)updateMultiStatusFromResponse;
- (id)getTotalFailureError;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;

@end
