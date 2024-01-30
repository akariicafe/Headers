@class NSString;

@interface IDSCKNotificationInfo : NSObject

@property (copy, nonatomic) NSString *alertLocalizationKey;
@property (nonatomic) BOOL shouldSendContentAvailable;

+ (Class)__class;
+ (id)alloc;

- (void).cxx_destruct;

@end
