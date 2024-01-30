@class NSString, THNetworkSignature, THThreadNetwork, NSDate;

@interface THPreferredThreadNetwork : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) THThreadNetwork *network;
@property (readonly, nonatomic) THNetworkSignature *networkSignature;
@property (copy, nonatomic) NSString *userInfo;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;


- (void).cxx_destruct;
- (void)updateUserInfo:(id)a0;
- (id)initWithThreadNetwork:(id)a0 networkSignature:(id)a1 creationDate:(id)a2 lastModificationDate:(id)a3 userInfo:(id)a4;

@end
