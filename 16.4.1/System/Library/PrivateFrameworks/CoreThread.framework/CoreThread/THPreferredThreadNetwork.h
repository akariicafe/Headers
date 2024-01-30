@class NSString, THNetworkSignature, THThreadNetwork, THThreadNetworkCredentialsActiveDataSetRecord, NSDate;

@interface THPreferredThreadNetwork : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) THThreadNetwork *network;
@property (readonly, nonatomic) THNetworkSignature *networkSignature;
@property (readonly, nonatomic) THThreadNetworkCredentialsActiveDataSetRecord *credentialsDataSetRecord;
@property (copy, nonatomic) NSString *userInfo;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)updateUserInfo:(id)a0;
- (id)initWithThreadNetwork:(id)a0 networkSignature:(id)a1 credentialsDataSetRecord:(id)a2 creationDate:(id)a3 lastModificationDate:(id)a4 userInfo:(id)a5;

@end
