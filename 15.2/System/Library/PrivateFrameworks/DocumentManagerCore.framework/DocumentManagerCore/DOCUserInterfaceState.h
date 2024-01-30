@class NSMutableDictionary, NSDictionary, NSData, NSDate, NSNumber;

@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSData *mostRecentlyVisitedLocation;
@property (retain, nonatomic) NSData *mostRecentEffectiveRootLocation;
@property (retain, nonatomic) NSDictionary *sortingMode;
@property (readonly, nonatomic) NSMutableDictionary *groupingBehaviors;
@property (readonly, nonatomic) NSMutableDictionary *displayModes;
@property (retain, nonatomic) NSNumber *browseTabSelected;
@property (retain, nonatomic) NSNumber *userPrefersTiledSidebarHidden;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)bumpLastUpdatedDate;

@end
