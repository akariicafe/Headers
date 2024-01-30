@class NSString, NSXPCConnection;

@interface COCoordinationServiceClient : NSObject <NSCopying>

@property (readonly, retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithConnection:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
