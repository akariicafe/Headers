@class NSString, BBSectionIcon, NSDictionary;

@interface BLTGizmoLegacyMapSectionInfo : NSObject {
    NSDictionary *_notificationMap;
}

@property (readonly, copy, nonatomic) NSString *mappedSectionID;
@property (readonly, copy, nonatomic) NSString *mappedParentSectionID;
@property (retain, nonatomic) BBSectionIcon *icon;
@property (copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)initWithNotificationMap:(id)a0;

@end
