@class NSString;

@interface DYGTMTLCaptureScopeInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long deviceAddress;
@property (nonatomic) unsigned long long deviceStreamRef;
@property (nonatomic) unsigned long long commandQueueStreamRef;
@property (nonatomic) unsigned long long scopeAddress;
@property (nonatomic) unsigned long long scopeStreamRef;
@property (copy, nonatomic) NSString *label;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
