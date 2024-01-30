@interface AXEventData : NSObject {
    struct _AXEventDataStorage { long long eventSenderIdentifier; long long page; long long usage; long long modifierFlags; float eventValue1; float eventValue2; } _storage;
}

@property (readonly, nonatomic) long long eventSenderIdentifier;
@property (readonly, nonatomic) long long page;
@property (readonly, nonatomic) long long usage;
@property (readonly, nonatomic) long long modifierFlags;
@property (readonly, nonatomic) float eventValue1;
@property (readonly, nonatomic) float eventValue2;
@property (readonly, nonatomic) BOOL wasPostedByAccessibility;
@property (readonly, nonatomic) char *dataBytes;
@property (readonly, nonatomic) long long dataLength;

+ (id)dataWithBytes:(char *)a0 length:(long long)a1;
+ (id)dataWithSender:(long long)a0;
+ (id)dataWithSender:(long long)a0 page:(long long)a1 usage:(long long)a2 modifierFlags:(long long)a3 eventValue1:(float)a4 eventValue2:(float)a5;

- (id)init;
- (id)description;

@end
