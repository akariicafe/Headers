@class NSUUID, DIHandle, DIXPCConnectionManager;

@interface DIDropInRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) DIHandle *handle;
@property (weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (retain, nonatomic) NSUUID *existingSessionIdentifier;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 connectionManager:(id)a1;

@end
