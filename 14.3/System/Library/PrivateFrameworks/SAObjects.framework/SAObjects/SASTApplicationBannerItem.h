@class NSString;
@protocol SASTTemplateAction;

@interface SASTApplicationBannerItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (copy, nonatomic) NSString *bundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)applicationBannerItem;
+ (id)applicationBannerItemWithDictionary:(id)a0 context:(id)a1;

@end
