@class VUIVideoManagedObject;

@interface VUIVideoImageInfoManagedObject : VUIImageInfoManagedObject

@property (retain, nonatomic) VUIVideoManagedObject *video;

+ (id)fetchRequest;

@end
