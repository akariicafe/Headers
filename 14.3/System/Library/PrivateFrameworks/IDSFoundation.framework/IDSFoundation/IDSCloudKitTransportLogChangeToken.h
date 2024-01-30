@class IDSCKServerChangeToken;

@interface IDSCloudKitTransportLogChangeToken : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) IDSCKServerChangeToken *ckToken;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCKToken:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
