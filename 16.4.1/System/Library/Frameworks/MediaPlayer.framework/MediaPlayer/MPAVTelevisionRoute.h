@class MPAVRouteConnection;

@interface MPAVTelevisionRoute : MPAVRoute {
    MPAVRouteConnection *_connection;
}

@property (readonly, nonatomic) void *television;

- (long long)routeType;
- (id)connection;
- (id)routeUID;
- (void)dealloc;
- (long long)routeSubtype;
- (void).cxx_destruct;
- (id)initWithTelevision:(void *)a0;

@end
