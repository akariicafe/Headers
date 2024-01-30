@class NSSet, REMChangeTombstone, REMChangeTransaction, REMObjectID;

@interface REMChangeObject : NSObject <NSCopying, NSSecureCoding, REMChangeCoalesceable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, weak, nonatomic) REMChangeTransaction *transaction;
@property (readonly, nonatomic) long long changeID;
@property (readonly, nonatomic) REMObjectID *changedObjectID;
@property (readonly, nonatomic) long long changeType;
@property (readonly, nonatomic) REMChangeTombstone *tombstone;
@property (readonly, nonatomic) NSSet *updatedProperties;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isCoalesced;
- (id)coalescedChanges;
- (id)copyForCoalescing;
- (void)encodeWithCoder:(id)a0;

@end
