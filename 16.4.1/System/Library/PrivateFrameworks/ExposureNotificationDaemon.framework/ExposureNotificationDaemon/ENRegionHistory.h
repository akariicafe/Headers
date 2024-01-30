@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *regionHistory;

- (void)encodeWithCoder:(id)a0;
- (void)removeRegionVisit:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegionVisits:(id)a0;
- (id)getRegions;
- (void)removeAllRegionVisits;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addRegionVisit:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)getRegionVisits;

@end
