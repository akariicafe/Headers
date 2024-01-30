@class NSXPCConnection;

@interface CMSClient : NSObject <NSCopying>

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)clientWithConnection:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
