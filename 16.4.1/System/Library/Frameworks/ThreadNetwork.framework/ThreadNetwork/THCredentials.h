@class NSString, NSData, NSDate;

@interface THCredentials : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *networkName;
@property (readonly, nonatomic) NSData *extendedPANID;
@property (readonly, nonatomic) NSData *borderAgentID;
@property (readonly, nonatomic) NSData *activeOperationalDataSet;
@property (readonly, nonatomic) NSData *networkKey;
@property (readonly, nonatomic) NSData *PSKC;
@property (nonatomic) unsigned char channel;
@property (readonly, nonatomic) NSData *panID;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initThreadCredentials:(id)a0 extendedPANID:(id)a1 borderAgentID:(id)a2 activeOperationalDataSet:(id)a3 PSKC:(id)a4 networkKey:(id)a5 channel:(unsigned char)a6 panID:(id)a7 creationDate:(id)a8 lastModificationDate:(id)a9;

@end
