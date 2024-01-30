@class NSString, NSDate, SALocation, NSNumber;
@protocol SASTTemplateAction;

@interface SASTMapViewItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (copy, nonatomic) NSString *extSessionGuid;
@property (copy, nonatomic) NSDate *extSessionGuidCreatedTimestamp;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSNumber *zoomLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mapViewItem;
+ (id)mapViewItemWithDictionary:(id)a0 context:(id)a1;

@end
