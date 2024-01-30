@class NSData, VUIImageInfoManagedObject;

@interface VUIImageDataManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) VUIImageInfoManagedObject *imageInfo;

+ (id)fetchRequest;

@end
