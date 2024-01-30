@class NSSet;

@interface NSCloudKitMirroringResetMetadataRequest : NSCloudKitMirroringRequest

@property (copy, nonatomic) NSSet *objectIDsToReset;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
