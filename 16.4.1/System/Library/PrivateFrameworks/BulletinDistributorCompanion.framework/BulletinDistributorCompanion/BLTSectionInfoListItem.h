@class NSDictionary, NSString, BBSectionIcon;

@interface BLTSectionInfoListItem : NSObject

@property (retain) NSDictionary *overrides;
@property (copy) NSString *universalSectionID;
@property (copy) NSString *overriddenFactorySectionID;
@property (copy) NSString *phoneSectionID;
@property (copy) NSString *overriddenDisplayName;
@property (copy) BBSectionIcon *overriddenIcon;

- (void).cxx_destruct;

@end
