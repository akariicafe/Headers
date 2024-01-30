@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (id)routeUID;
- (long long)routeSubtype;
- (id)initWithTelevision:(void *)a0;
- (void).cxx_destruct;
- (id)connection;
- (long long)routeType;
- (void)dealloc;

@end
