@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask {
    NSString *_previousSyncToken;
}

@property (readonly, nonatomic) NSString *nextSyncToken;
@property (readonly, nonatomic) BOOL moreToSync;
@property (readonly, nonatomic) BOOL wasInvalidSyncToken;

- (void).cxx_destruct;
- (id)requestBody;
- (id)description;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithPropertiesToFind:(id)a0 atURL:(id)a1 withDepth:(int)a2 previousSyncToken:(id)a3;
- (id)notFoundHREFs;

@end
