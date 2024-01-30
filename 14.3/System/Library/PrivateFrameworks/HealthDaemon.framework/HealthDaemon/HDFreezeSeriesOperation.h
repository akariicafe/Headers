@class NSUUID, NSDictionary;

@interface HDFreezeSeriesOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) Class entityClass;
@property (readonly, nonatomic) NSUUID *frozenIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 entityClass:(Class)a2;

@end
