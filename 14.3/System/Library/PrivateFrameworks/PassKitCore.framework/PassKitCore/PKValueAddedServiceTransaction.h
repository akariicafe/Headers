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

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
