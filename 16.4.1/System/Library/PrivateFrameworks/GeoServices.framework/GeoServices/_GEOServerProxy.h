@class GEOServer;

@interface _GEOServerProxy : NSObject

@property (readonly, nonatomic) Class serverClass;
@property (readonly, nonatomic) GEOServer *server;

+ (id)proxyForClass:(Class)a0;
+ (id)proxyForServer:(id)a0 daemon:(id)a1;

- (BOOL)isEqualToServerProxy:(id)a0;
- (void)startServerWithDaemon:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)_setServer:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
