@class ATXFaceGalleryConfiguration;

@interface ATXFaceGalleryFileReader : NSObject {
    long long _source;
}

@property (readonly, copy, nonatomic) ATXFaceGalleryConfiguration *configuration;

+ (id)_pathForSource:(long long)a0;
+ (id)_loadConfigurationFromPath:(id)a0;

- (id)initWithSource:(long long)a0;
- (BOOL)writeConfiguration:(id)a0 error:(id *)a1;

@end
