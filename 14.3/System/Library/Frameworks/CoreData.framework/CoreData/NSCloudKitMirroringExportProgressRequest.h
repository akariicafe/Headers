@class NSSet;

@interface NSCloudKitMirroringExportProgressRequest : NSCloudKitMirroringRequest

@property (copy, nonatomic) NSSet *objectIDsToFetch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithOptions:(id)a0 completionBlock:(id /* block */)a1;

@end
