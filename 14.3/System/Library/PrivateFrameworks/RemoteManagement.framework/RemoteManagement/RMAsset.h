@class NSString, NSData, RMManagementChannel;

@interface RMAsset : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *serverToken;
@property (readonly, copy, nonatomic) NSData *content;
@property (readonly, copy, nonatomic) RMManagementChannel *channel;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToAsset:(id)a0;
- (id)initWithType:(id)a0 identifier:(id)a1 serverToken:(id)a2 content:(id)a3 channel:(id)a4;

@end
