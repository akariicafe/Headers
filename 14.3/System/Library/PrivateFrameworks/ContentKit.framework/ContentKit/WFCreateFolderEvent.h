@class NSString;

@interface WFCreateFolderEvent : WFEvent

@property (copy, nonatomic) NSString *folderSource;
@property (nonatomic) unsigned int icon;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) unsigned int shortcutCount;

+ (Class)codableEventClass;

- (void).cxx_destruct;

@end
