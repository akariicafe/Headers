@class NSString, NSArray;

@interface SUScriptActivityViewController : SUScriptViewController {
    NSArray *_applicationActivities;
    NSArray *_providers;
}

@property (copy) id excludedActivityTypes;
@property (readonly) NSString *activityTypeAddToReadingList;
@property (readonly) NSString *activityTypeAssignToContact;
@property (readonly) NSString *activityTypeCopyToPasteboard;
@property (readonly) NSString *activityTypeMail;
@property (readonly) NSString *activityTypeMessage;
@property (readonly) NSString *activityTypePostToFacebook;
@property (readonly) NSString *activityTypePostToFlickr;
@property (readonly) NSString *activityTypePostToTwitter;
@property (readonly) NSString *activityTypePostToVimeo;
@property (readonly) NSString *activityTypePostToWeibo;
@property (readonly) NSString *activityTypePrint;
@property (readonly) NSString *activityTypeSaveToCameraRoll;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dealloc;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)initWithScriptItemProviders:(id)a0 applicationActivities:(id)a1;
- (id)newNativeViewController;
- (void)setTitle:(id)a0 forActivityType:(id)a1;

@end
