@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (long long)routeType;
- (id)routeUID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTelevision:(void *)a0;
- (long long)routeSubtype;
- (id)connection;

@end
