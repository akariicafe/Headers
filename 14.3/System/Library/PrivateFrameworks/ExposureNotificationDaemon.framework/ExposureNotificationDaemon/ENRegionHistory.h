@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRegionVisits:(id)a0;
- (id)getRegionVisits;
- (void)addRegionVisit:(id)a0;
- (void)removeRegionVisit:(id)a0;
- (void)removeAllRegionVisits;
- (id)getRegions;

@end
