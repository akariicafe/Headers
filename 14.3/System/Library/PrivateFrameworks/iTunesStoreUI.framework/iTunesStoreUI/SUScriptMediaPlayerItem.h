@class NSString, NSNumber, SUMediaPlayerItem;

@interface SUScriptMediaPlayerItem : SUScriptObject {
    SUMediaPlayerItem *_mediaItem;
}

@property (copy) NSString *backgroundImageURL;
@property (copy) NSString *bookmarkIdentifier;
@property (copy) NSString *initialOrientation;
@property (retain) NSNumber *itemIdentifier;
@property (copy) NSString *itemType;
@property (retain) NSNumber *playableDuration;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;
@property (copy) NSString *URL;

+ (id)webScriptNameForKey:(const char *)a0;

- (void)dealloc;
- (id)attributeKeys;
- (id)initWithDictionary:(id)a0;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)copyNativeMediaPlayerItem;

@end
