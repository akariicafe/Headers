@class NSData;

@interface REMReplicaManagerSerializedData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isRepresentingDiscardedReplicaManager;
@property (readonly, nonatomic) NSData *managerData;
@property (readonly, nonatomic) unsigned long long version;

+ (id)serializedDataRepresentingDiscardedReplicaManager;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithManagerData:(id)a0 version:(unsigned long long)a1;

@end
