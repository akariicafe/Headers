@class NSString, NSArray, NSDate, GDContact;

@interface GDInteraction : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) long long mechanism;
@property (readonly, nonatomic) long long direction;
@property (readonly, nonatomic) GDContact *sender;
@property (readonly, nonatomic) NSArray *recipients;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1 bundleId:(id)a2 mechanism:(long long)a3 direction:(long long)a4 sender:(id)a5 recipients:(id)a6;

@end
