@class NSString, NSURL, NSData, NSNumber;

@interface SPRVASRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSNumber *vasTerminalProtocol;
@property (copy) NSString *merchantId;
@property (copy) NSURL *vasUrl;
@property (copy) NSData *vasFilter;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithVasTerminalProtocol:(id)a0 merchantId:(id)a1 vasUrl:(id)a2 vasFilter:(id)a3;

@end
