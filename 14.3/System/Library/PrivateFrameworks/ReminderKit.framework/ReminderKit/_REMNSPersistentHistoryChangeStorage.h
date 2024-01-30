@class NSSet, REMNSPersistentHistoryChangeTombstone, REMObjectID;

@interface _REMNSPersistentHistoryChangeStorage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long changeID;
@property (copy, nonatomic) REMObjectID *changedObjectID;
@property (nonatomic) long long changeType;
@property (copy, nonatomic) REMNSPersistentHistoryChangeTombstone *tombstone;
@property (copy, nonatomic) NSSet *updatedProperties;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
