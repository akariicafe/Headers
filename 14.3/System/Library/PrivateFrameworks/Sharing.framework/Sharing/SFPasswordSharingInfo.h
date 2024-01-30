@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *channel;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *psk;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
