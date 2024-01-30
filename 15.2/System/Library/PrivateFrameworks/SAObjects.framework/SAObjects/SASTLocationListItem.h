@class SAUIDecoratedText, SASTTemplateStarRating, NSString;
@protocol SASTTemplateAction;

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<SASTTemplateAction> action;
@property (retain, nonatomic) SAUIDecoratedText *formattedDistance;
@property (retain, nonatomic) SASTTemplateStarRating *rating;
@property (retain, nonatomic) SAUIDecoratedText *subtitle;
@property (retain, nonatomic) SAUIDecoratedText *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationListItem;
+ (id)locationListItemWithDictionary:(id)a0 context:(id)a1;

@end
