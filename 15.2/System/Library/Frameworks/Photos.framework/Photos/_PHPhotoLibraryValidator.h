@class PLPhotoLibrary;

@interface _PHPhotoLibraryValidator : PHValidator

@property (readonly, weak, nonatomic) PLPhotoLibrary *photoLibrary;

- (void).cxx_destruct;
- (BOOL)isValidImagePathExtension:(id)a0;
- (BOOL)isValidVideoPathExtension:(id)a0;
- (id)initWithPhotoLibrary:(id)a0;

@end
