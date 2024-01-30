@interface MTMAPIResponseDatabaseObjectProvider : NSObject <NSFetchedResultsControllerDelegate> {
    void /* unknown type, empty encoding */ response;
    void /* unknown type, empty encoding */ databaseObjectsCache;
    void /* unknown type, empty encoding */ needsParsing;
    void /* unknown type, empty encoding */ showsFRC;
    void /* unknown type, empty encoding */ episodesFRC;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ delegate;

- (void)controllerDidChangeContent:(id)a0;
- (id)initWithResponse:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)databaseObjectWithStoreID:(long long)a0 contentType:(long long)a1;

@end
