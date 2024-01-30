@class NSNumber;

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) NSNumber *qualificationID;

+ (void)load;
+ (id)entryKey;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithRootNodeID:(id)a0 withQualificationID:(id)a1 withEntryDate:(id)a2;

@end
