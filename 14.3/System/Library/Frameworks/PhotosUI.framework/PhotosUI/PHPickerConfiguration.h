@class PHPhotoLibrary, PHPickerFilter;

@interface PHPickerConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long resultOptions;
@property (nonatomic) long long preferredAssetRepresentationMode;
@property (nonatomic) long long selectionLimit;
@property (copy, nonatomic) PHPickerFilter *filter;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 resultOptions:(unsigned long long)a1;

@end
