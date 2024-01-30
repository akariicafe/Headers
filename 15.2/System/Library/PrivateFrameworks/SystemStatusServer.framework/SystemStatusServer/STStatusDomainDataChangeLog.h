@class NSOrderedSet, NSDictionary, BSIntegerSet;

@interface STStatusDomainDataChangeLog : NSObject

@property (readonly, copy, nonatomic) NSOrderedSet *sortedRecordKeys;
@property (readonly, copy, nonatomic) NSDictionary *recordsByKey;
@property (readonly, nonatomic) BSIntegerSet *domainsWithData;

- (id)currentDataForDomain:(unsigned long long)a0;
- (id)recordForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithRecordKeys:(id)a0;

@end
