@class NSString, NSArray;

@interface FPActionOperationInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *operationID;
@property (retain, nonatomic) NSArray *roots;
@property (nonatomic) BOOL attachSandboxExtensionsOnXPCEncoding;
@property (nonatomic) unsigned int qos;
@property (nonatomic) unsigned long long _t_moveQueueWidth;
@property (nonatomic) BOOL _t_clientDrivenReader;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithOperationID:(id)a0 roots:(id)a1;

@end
