@class NSDateInterval;

@interface RTStoredLocationOfInterestEnumerationOptions : NSObject <NSCopying>

@property (readonly, nonatomic) BOOL ascendingVisitEntryDate;
@property (readonly, nonatomic) unsigned long long batchSize;
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL singleVisit;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithAscendingVisitEntryDate:(BOOL)a0 batchSize:(unsigned long long)a1 dateInterval:(id)a2 singleVisit:(BOOL)a3;

@end
