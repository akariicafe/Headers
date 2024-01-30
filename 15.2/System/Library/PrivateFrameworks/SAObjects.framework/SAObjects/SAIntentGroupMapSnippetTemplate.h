@class NSString, SAIntentGroupDetailLabelTemplateComponent, SALocation, SAUIColor;
@protocol SAIntentGroupSetMapLocation;

@interface SAIntentGroupMapSnippetTemplate : SAIntentGroupSnippetTemplate

@property (retain, nonatomic) SAUIColor *color;
@property (retain, nonatomic) SAIntentGroupDetailLabelTemplateComponent *detailLabelComponent;
@property (nonatomic) BOOL interactive;
@property (retain, nonatomic) SALocation *location;
@property (copy, nonatomic) NSString *mapSize;
@property (retain, nonatomic) id<SAIntentGroupSetMapLocation> updateLocationCommand;

+ (id)mapSnippetTemplate;
+ (id)mapSnippetTemplateWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
