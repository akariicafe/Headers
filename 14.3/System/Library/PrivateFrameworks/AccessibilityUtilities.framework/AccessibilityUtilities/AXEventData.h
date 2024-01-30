@interface AXEventData : NSObject {
    struct _AXEventDataStorage { long long eventSenderIdentifier; } _storage;
}

@property (readonly, nonatomic) long long eventSenderIdentifier;
@property (readonly, nonatomic) BOOL wasPostedByAccessibility;
@property (readonly, nonatomic) char *dataBytes;
@property (readonly, nonatomic) long long dataLength;

+ (id)dataWithBytes:(char *)a0 length:(long long)a1;
+ (id)dataWithSender:(long long)a0;

- (id)init;
- (id)description;

@end
