@class NSString, CSIndexConnection;

@interface CSPrivateSearchableIndex : CSSearchableIndex

@property BOOL attemptedIndexPathResolution;
@property (retain, nonatomic) NSString *resolvedIndexPath;
@property (nonatomic) int resolvedIndexPathErrorCode;
@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) CSIndexConnection *savedConnection;

+ (id)defaultSearchableIndex;

- (id)connection;
- (id)initWithPath:(id)a0;
- (id)xpc_dictionary_for_command:(const char *)a0 requiresInitialization:(BOOL)a1;
- (void)dealloc;
- (void).cxx_destruct;

@end
