@class NSDictionary, NSData, NSDate, NSNumber;

@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *lastUpdatedDate;
@property (retain, nonatomic) NSData *mostRecentlyVisitedLocation;
@property (retain, nonatomic) NSData *mostRecentEffectiveRootLocation;
@property (retain, nonatomic) NSNumber *displayMode;
@property (retain, nonatomic) NSDictionary *sortingMode;
@property (retain, nonatomic) NSNumber *browseTabSelected;
@property (retain, nonatomic) NSNumber *userPrefersTiledSidebarHidden;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (void)bumpLastUpdatedDate;

@end
