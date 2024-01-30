@class NSString, DNDFocusModeMO;

@interface DNDPerModeSettingsMO : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) DNDFocusModeMO *mode;

+ (id)fetchRequest;

- (Class)dnd_settingsType;

@end
