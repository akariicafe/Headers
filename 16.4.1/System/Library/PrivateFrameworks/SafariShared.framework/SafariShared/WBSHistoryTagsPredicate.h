@class NSSet, NSString, NSDate;

@interface WBSHistoryTagsPredicate : NSObject <WBSHistoryPredicate>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long tagType;
@property (copy, nonatomic) NSSet *identifiers;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long minimumItemCount;
@property (nonatomic) long long sortOrder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)statementForDatabase:(id)a0 cache:(id)a1 fetchOptions:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 tagType:(unsigned long long)a2;

@end
