@class NSString, CSSearchConnection;

@interface CSPrivateSearchQuery : CSSearchQuery

@property (retain, nonatomic) NSString *indexPath;
@property (retain, nonatomic) NSString *resolvedIndexPath;
@property (retain, nonatomic) CSSearchConnection *savedConnection;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2 attributes:(id)a3;
- (void)start;
- (id)initWithPath:(id)a0 queryString:(id)a1 attributers:(id)a2;
- (id)initWithPath:(id)a0 queryString:(id)a1 context:(id)a2;
- (id)connection;

@end
