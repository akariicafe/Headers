@class NSNumber, NSDateInterval;

@interface RTStoredVisitFetchOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL ascending;
@property (readonly, nonatomic) NSNumber *confidence;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) BOOL labelVisit;
@property (readonly, nonatomic) NSNumber *limit;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 limit:(id)a3;
- (id)description;
- (BOOL)isEqualToFetchOptions:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithAscending:(BOOL)a0 confidence:(id)a1 dateInterval:(id)a2 labelVisit:(BOOL)a3 limit:(id)a4;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
