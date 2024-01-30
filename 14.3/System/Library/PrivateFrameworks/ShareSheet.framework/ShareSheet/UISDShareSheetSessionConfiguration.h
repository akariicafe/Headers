@class NSNumber, NSArray;

@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *nearbyCountSlotID;
@property (retain, nonatomic) NSArray *peopleProxies;
@property (retain, nonatomic) NSArray *shareProxies;
@property (retain, nonatomic) NSArray *actionProxies;
@property (nonatomic) BOOL wantsAnimation;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
