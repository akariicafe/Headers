@class NSUUID, NSDictionary, NSDate;

@interface HDFreezeQuantitySampleSeriesOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSUUID *frozenIdentifier;
@property (readonly, nonatomic) long long freezeResult;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 metadata:(id)a1 endDate:(id)a2;

@end
