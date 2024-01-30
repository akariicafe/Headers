@class NSNumber;

@interface VUIRentalCheckInContext : NSObject

@property (readonly, nonatomic) NSNumber *rentalID;
@property (readonly, nonatomic) NSNumber *dsid;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithRentalID:(id)a0 dsid:(id)a1;

@end
