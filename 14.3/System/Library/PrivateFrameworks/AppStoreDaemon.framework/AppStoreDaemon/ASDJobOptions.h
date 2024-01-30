@class ASDJobManifest, NSXPCConnection;

@interface ASDJobOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSXPCConnection *endpoint;
@property (retain, nonatomic) ASDJobManifest *manifest;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
