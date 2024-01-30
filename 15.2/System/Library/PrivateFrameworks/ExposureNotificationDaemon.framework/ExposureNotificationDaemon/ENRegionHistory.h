@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (void)addRegionVisit:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)getRegionVisits;
- (id)initWithRegionVisits:(id)a0;
- (void)removeAllRegionVisits;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)removeRegionVisit:(id)a0;
- (id)getRegions;

@end
