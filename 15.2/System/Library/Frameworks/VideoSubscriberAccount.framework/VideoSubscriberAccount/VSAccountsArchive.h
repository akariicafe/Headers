@class NSArray, VSAccountChannels;

@interface VSAccountsArchive : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *accounts;
@property (copy, nonatomic) VSAccountChannels *channels;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
