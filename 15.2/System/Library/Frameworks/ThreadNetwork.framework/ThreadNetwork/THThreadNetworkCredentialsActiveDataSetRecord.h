@class THThreadNetworkBorderAgent, THThreadNetworkCredentialsDataSet, NSUUID, NSString, THThreadNetwork, NSDate, THThreadNetworkCredentials;

@interface THThreadNetworkCredentialsActiveDataSetRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) THThreadNetworkBorderAgent *borderAgent;
@property (readonly, nonatomic) THThreadNetworkCredentialsDataSet *credentialsDataSet;
@property (readonly, nonatomic) THThreadNetwork *network;
@property (retain, nonatomic) THThreadNetworkCredentials *credentials;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) NSString *keychainAccessGroup;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBorderAgent:(id)a0 credentialsDataSet:(id)a1 network:(id)a2 credentials:(id)a3 uniqueIdentifier:(id)a4 keychainAccessGroup:(id)a5 creationDate:(id)a6 lastModificationDate:(id)a7;

@end
