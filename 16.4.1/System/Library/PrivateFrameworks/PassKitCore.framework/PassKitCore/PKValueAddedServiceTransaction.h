@class NSString, NSDate, NSNumber, PKValueAddedMerchant;

@interface PKValueAddedServiceTransaction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKValueAddedMerchant *merchant;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *merchantURL;
@property (retain, nonatomic) NSNumber *terminalApplicationVersion;
@property (nonatomic) long long terminalMode;
@property (nonatomic) BOOL didSucceed;
@property (retain, nonatomic) NSDate *transactionDate;
@property (nonatomic) long long error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
