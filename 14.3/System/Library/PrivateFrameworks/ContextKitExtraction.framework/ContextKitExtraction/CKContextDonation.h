@class NSString, NSMutableArray;

@interface CKContextDonation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *items;
@property (nonatomic) unsigned long long nonce;
@property (readonly, nonatomic) NSString *donorBundleIdentifier;

+ (id)establishServiceConnection;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (void)donate;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDonorBundleIdentifier:(id)a0;
- (id)initWithDonations:(id)a0 donorBundleIdentifier:(id)a1;
- (id)_concatenatedRequestTextUsingDebugText:(BOOL)a0;
- (id)concatenatedRequestsText;
- (id)concatenatedRequestsDebugText;

@end
