@class NSSet;

@interface NSCloudKitMirroringDelegateSerializationRequest : NSCloudKitMirroringRequest

@property (nonatomic) unsigned long long resultType;
@property (copy, nonatomic) NSSet *objectIDsToSerialize;

+ (id)stringForResultType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;

@end
