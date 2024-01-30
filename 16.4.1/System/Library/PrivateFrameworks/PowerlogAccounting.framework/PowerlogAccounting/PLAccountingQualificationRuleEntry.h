@class NSNumber;

@interface PLAccountingQualificationRuleEntry : PLAccountingRuleEntry

@property (readonly, nonatomic) NSNumber *rootNodeID;
@property (readonly, nonatomic) NSNumber *qualificationID;

+ (id)entryKey;
+ (void)load;

- (id)initWithRootNodeID:(id)a0 withQualificationID:(id)a1 withEntryDate:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;

@end
