@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL labelVisit;
@property (readonly, nonatomic) NSNumber *limit;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 limit:(id)a3;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4;

@end
