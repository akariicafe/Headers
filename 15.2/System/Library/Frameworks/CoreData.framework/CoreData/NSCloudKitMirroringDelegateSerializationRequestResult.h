@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *serializedObjects;

- (id)initWithRequest:(id)a0 serializedObjects:(id)a1 error:(id)a2;
- (void)dealloc;

@end
