@class __CFN_ConnectionMetrics, NSObject;
@protocol OS_nw_endpoint;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {
    __CFN_ConnectionMetrics *__metrics;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;
@property (readonly, nonatomic, getter=isTLSConfigured) BOOL TLSConfigured;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
