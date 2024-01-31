@class NSDictionary;

@interface NSCloudKitMirroringDelegateSerializationRequestResult : NSCloudKitMirroringResult

@property (readonly, nonatomic) NSDictionary *serializedObjects;

- (void)dealloc;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 serializedObjects:(id)a2 error:(id)a3;

@end
