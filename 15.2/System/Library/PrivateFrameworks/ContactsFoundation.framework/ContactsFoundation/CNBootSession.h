@class NSString;

@interface CNBootSession : NSObject

@property (class, readonly) NSString *currentBootSessionUUID;

+ (id)readCurrentBootSessionUUID;

@end
