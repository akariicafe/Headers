@class NSMutableDictionary, NSString, NSData, IDSOpportunisticOptions;

@interface IDSOpportunisticData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *sendCount;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *accountUniqueID;
@property (retain, nonatomic) IDSOpportunisticOptions *options;

- (BOOL)isInvalid;
- (void).cxx_destruct;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithData:(id)a0 identifier:(id)a1 serviceName:(id)a2 accountUniqueID:(id)a3 options:(id)a4 sendCount:(id)a5;
- (id)initWithData:(id)a0 identifier:(id)a1 serviceName:(id)a2 accountUniqueID:(id)a3 options:(id)a4;
- (void)markInvalid;
- (BOOL)shouldSendToDestination:(id)a0;
- (void)incrementSendCountForDestination:(id)a0;
- (long long)sendCountForURI:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
