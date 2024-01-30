@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying>

@property (nonatomic, getter=wasHandled) BOOL handled;
@property (retain, nonatomic) NSSet *recordZoneIDs;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
