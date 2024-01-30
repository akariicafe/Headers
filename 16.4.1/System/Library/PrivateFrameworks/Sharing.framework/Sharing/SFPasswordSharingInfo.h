@class NSNumber, NSString;

@interface SFPasswordSharingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *channel;
@property (retain, nonatomic) NSString *networkName;
@property (retain, nonatomic) NSString *psk;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
