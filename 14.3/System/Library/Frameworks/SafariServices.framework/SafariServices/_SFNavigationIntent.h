@class _SFTabStateData, NSString, NSURL, NSArray, WebBookmark, NSUUID, WBSCloudTab, NSDictionary, _WKActivatedElementInfo;

@interface _SFNavigationIntent : NSObject {
    id _value;
}

@property (class, readonly, nonatomic) long long defaultTabOrder;

@property (nonatomic) long long policy;
@property (nonatomic) BOOL shouldRelateToSourceTab;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) WebBookmark *bookmark;
@property (readonly, nonatomic) WBSCloudTab *cloudTab;
@property (readonly, nonatomic) _SFTabStateData *recentlyClosedTabStateData;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *navigationIntents;
@property (readonly, nonatomic) BOOL opensInNewTab;
@property (readonly, nonatomic) BOOL opensInNewWindow;
@property (readonly, nonatomic) BOOL canUseExistingBlankTab;
@property (readonly, nonatomic) BOOL shouldOrderToForeground;
@property (readonly, copy, nonatomic) NSDictionary *externalOptions;
@property (nonatomic) long long provenance;
@property (retain, nonatomic) NSUUID *sourceTabUUID;
@property (retain, nonatomic) NSUUID *sourceWindowUUID;
@property (retain, nonatomic) _WKActivatedElementInfo *sourceElementInfo;
@property (readonly, copy, nonatomic) NSString *privacyPreservingDescription;
@property (readonly, nonatomic) BOOL externalURLSourceApplicationIsSpotlight;

- (void).cxx_destruct;
- (id)description;
- (id)_initWithType:(unsigned long long)a0 value:(id)a1 policy:(long long)a2;

@end
