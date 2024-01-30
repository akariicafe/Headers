@interface NTKKaleidoscopeResourcesManifest : NTKBasePhotoResourcesManifest

- (BOOL)validateImageListItem:(id)a0 withError:(id *)a1;
- (unsigned long long)minCompatibleVersion;
- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;

@end
