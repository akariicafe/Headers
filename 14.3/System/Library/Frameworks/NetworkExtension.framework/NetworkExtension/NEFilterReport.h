@class NEFilterFlow;

@interface NEFilterReport : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NEFilterFlow *flow;
@property long long action;
@property unsigned long long bytesInboundCount;
@property unsigned long long bytesOutboundCount;
@property (readonly) long long event;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFlow:(id)a0 action:(long long)a1 event:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
