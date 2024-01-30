@class NSString;

@interface PSUICellularPlanUniversalReference : NSObject <NSCopying, NSCoding>

@property (retain, nonatomic) NSString *iccid;

+ (id)referenceFromCellularPlanPendingTransfer:(id)a0;
+ (id)referenceFromPlanItem:(id)a0;
+ (id)referenceFromDanglingPlanItem:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIccid:(id)a0;

@end
