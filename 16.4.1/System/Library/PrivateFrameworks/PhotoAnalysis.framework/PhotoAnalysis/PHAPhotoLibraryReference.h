@class NSString;

@interface PHAPhotoLibraryReference : NSObject

@property (readonly, copy) NSString *path;

- (id)initWithLibraryURL:(id)a0;
- (BOOL)isEqualToPhotoLibraryReference:(id)a0;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;

@end
