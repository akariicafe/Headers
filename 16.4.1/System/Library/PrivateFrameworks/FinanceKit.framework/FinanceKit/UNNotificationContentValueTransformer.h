@class NSArray;

@interface UNNotificationContentValueTransformer : NSSecureUnarchiveFromDataTransformer

@property (class, nonatomic, readonly) NSArray *allowedTopLevelClasses;

- (id)init;

@end
