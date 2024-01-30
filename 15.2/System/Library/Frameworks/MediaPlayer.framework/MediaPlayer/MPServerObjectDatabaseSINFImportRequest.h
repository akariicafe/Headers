@class NSString;

@interface MPServerObjectDatabaseSINFImportRequest : MPServerObjectDatabaseAssetImportRequest {
    id _requestPayload;
    NSString *_hashedPersonID;
}

- (void).cxx_destruct;
- (BOOL)performWithDatabaseOperations:(id)a0 error:(id *)a1;
- (id)initWithPayload:(id)a0 requestPayload:(id)a1 hashedPersonID:(id)a2;

@end
