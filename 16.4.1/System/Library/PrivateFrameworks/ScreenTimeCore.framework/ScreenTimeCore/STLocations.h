@class NSURL;

@interface STLocations : NSObject

@property (class, readonly, nonatomic) NSURL *applicationSupportDirectory;
@property (class, readonly, nonatomic) NSURL *cachesDirectory;
@property (class, readonly, nonatomic) NSURL *persistentStoreDirectory;
@property (class, readonly, nonatomic) NSURL *familyPhotosCacheDirectory;

@end
