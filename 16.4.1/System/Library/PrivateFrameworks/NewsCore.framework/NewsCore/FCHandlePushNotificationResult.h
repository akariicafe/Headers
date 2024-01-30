@class NSSet;

@interface FCHandlePushNotificationResult : NSObject <NSCopying> {
    BOOL _handled;
    NSSet *_recordZoneIDs;
}

@property (readonly, nonatomic, getter=wasHandled) BOOL handled;
@property (readonly, nonatomic) NSSet *recordZoneIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
