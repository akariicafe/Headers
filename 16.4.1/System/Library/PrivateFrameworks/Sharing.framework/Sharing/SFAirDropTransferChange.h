@class NSUUID, SFProxyText;

@interface SFAirDropTransferChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *proxyIdentifier;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) SFProxyText *displayName;
@property (readonly, nonatomic) SFProxyText *status;
@property (readonly, nonatomic) long long state;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProxyIdentifier:(id)a0 progress:(double)a1 displayName:(id)a2 status:(id)a3 state:(long long)a4;

@end
