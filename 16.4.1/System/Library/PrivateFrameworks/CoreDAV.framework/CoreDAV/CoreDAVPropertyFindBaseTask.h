@class NSSet, CoreDAVMultiStatusItem;

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) CoreDAVMultiStatusItem *multiStatus;

- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1;
- (void)updateMultiStatusFromResponse;
- (id)getTotalFailureError;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)successfulValueForNameSpace:(id)a0 elementName:(id)a1;
- (id)parseHints;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
