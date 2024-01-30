@class GEOServer;

@interface _GEOServerProxy : NSObject

@property (readonly, nonatomic) Class serverClass;
@property (readonly, nonatomic) GEOServer *server;

+ (id)proxyForClass:(Class)a0;
+ (id)proxyForServer:(id)a0 daemon:(id)a1;

- (BOOL)isEqualToServerProxy:(id)a0;
- (void).cxx_destruct;
- (void)_setServer:(id)a0 daemon:(id)a1;
- (unsigned long long)hash;
- (id)description;
- (void)startServerWithDaemon:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
