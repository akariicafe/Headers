@class NSString;

@interface BSXPCServiceConnectionContext : NSObject <NSCopying> {
    NSString *_proem;
}

@property (readonly, copy, nonatomic) NSString *endpointDescription;
@property (readonly, nonatomic, getter=isServer) BOOL server;
@property (readonly, nonatomic, getter=isClient) BOOL client;
@property (readonly, nonatomic, getter=isRoot) BOOL root;
@property (readonly, nonatomic, getter=isChild) BOOL child;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
