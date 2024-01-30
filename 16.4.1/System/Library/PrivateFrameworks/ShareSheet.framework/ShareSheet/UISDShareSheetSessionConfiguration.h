@class NSNumber, NSArray;

@interface UISDShareSheetSessionConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *nearbyCountSlotID;
@property (retain, nonatomic) NSNumber *nearbyCountBadge;
@property (retain, nonatomic) NSArray *peopleProxies;
@property (retain, nonatomic) NSArray *shareProxies;
@property (retain, nonatomic) NSArray *actionProxies;
@property (nonatomic) BOOL wantsAnimation;
@property (nonatomic) BOOL reloadData;
@property (copy, nonatomic) NSArray *peopleSuggestions;
@property (copy, nonatomic) NSArray *restrictedActivityTypes;
@property (nonatomic) BOOL shouldBlockPresentation;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
