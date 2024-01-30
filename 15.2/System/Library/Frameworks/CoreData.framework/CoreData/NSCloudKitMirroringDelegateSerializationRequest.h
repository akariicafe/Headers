@class NSSet;

@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSSet *objectIDsToSerialize;

- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
