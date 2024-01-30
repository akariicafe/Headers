@class NSData, NSHTTPURLResponse;

@interface ILNetworkResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSHTTPURLResponse *urlResponse;
@property (copy, nonatomic) NSData *data;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithURLResponse:(id)a0 data:(id)a1;

@end
