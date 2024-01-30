@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator

@property (readonly, weak, nonatomic) PLPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValidImagePathExtension:(id)a0;
- (BOOL)isValidVideoPathExtension:(id)a0;

@end
