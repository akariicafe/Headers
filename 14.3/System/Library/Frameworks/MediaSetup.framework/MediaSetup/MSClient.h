@class NSXPCConnection;

@interface MSClient : NSObject <NSCopying>

@property (retain, nonatomic) NSXPCConnection *connection;

+ (id)clientWithConnection:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;

@end
