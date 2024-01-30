@class NSString;

@interface PHAPhotoLibraryReference : NSObject

@property (readonly, copy) NSString *path;

- (id)init;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithLibraryURL:(id)a0;
- (BOOL)isEqualToPhotoLibraryReference:(id)a0;

@end
