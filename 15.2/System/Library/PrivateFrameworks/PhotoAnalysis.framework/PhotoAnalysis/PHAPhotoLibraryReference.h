@class NSString;

@interface PHAPhotoLibraryReference : NSObject

@property (readonly, copy) NSString *path;

- (BOOL)isEqualToPhotoLibraryReference:(id)a0;
- (id)initWithLibraryURL:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)dictionaryRepresentation;

@end
