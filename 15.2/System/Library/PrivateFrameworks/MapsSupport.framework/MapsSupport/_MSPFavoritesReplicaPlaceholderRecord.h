@class MSPPosition, NSString, NSData, MSPVectorTimestamp;

@interface _MSPFavoritesReplicaPlaceholderRecord : NSObject <MSPFavoritesReplicaRecord, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MSPPosition *position;
@property (readonly, nonatomic) MSPVectorTimestamp *positionTimestamp;
@property (readonly, copy, nonatomic) NSData *contents;
@property (readonly, copy, nonatomic) MSPVectorTimestamp *contentsTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContents:(id)a0 contentsTimestamp:(id)a1 position:(id)a2 positionTimestamp:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
