@class NSString, NSMutableDictionary, CoreDAVXMLData;

@interface CoreDAVMultiPutTask : CoreDAVTask {
    NSString *_appSpecificNamespace;
    NSString *_appSpecificDataProp;
    NSString *_checkCTag;
    CoreDAVXMLData *_pushedData;
    BOOL _validCTag;
}

@property (readonly, nonatomic) NSString *nextCTag;
@property (readonly, nonatomic) NSMutableDictionary *uuidToHREF;
@property (readonly, nonatomic) NSMutableDictionary *hrefToETag;
@property (readonly, nonatomic) NSMutableDictionary *uuidToStatus;
@property (readonly, nonatomic) NSMutableDictionary *hrefToStatus;
@property (readonly, nonatomic) NSMutableDictionary *uuidToErrorItems;
@property (readonly, nonatomic) NSMutableDictionary *hrefToErrorItems;

- (id)requestBody;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)httpMethod;
- (id)copyDefaultParserForContentType:(id)a0;
- (void).cxx_destruct;
- (void)fillOutDataWithUUIDsToAddActions:(id)a0 hrefsToModDeleteActions:(id)a1;
- (id)initWithURL:(id)a0 checkCTag:(id)a1 uuidsToAddActions:(id)a2 hrefsToModDeleteActions:(id)a3;

@end
