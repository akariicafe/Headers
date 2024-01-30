@class NSString;

@interface PLPhotoEditExporterMetadataConverter : NSObject <PICompositionExporterMetadataConverter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)install;

- (id)videoMetadataForVariation:(id)a0 error:(id *)a1;
- (BOOL)setImageVariation:(id)a0 properties:(id)a1 error:(id *)a2;
- (id)photoProcessingFlagsFromProperties:(id)a0 error:(id *)a1;
- (BOOL)setPhotoProcessingFlags:(id)a0 properties:(id)a1 error:(id *)a2;
- (id)photoFeatureFlags:(id)a0 error:(id *)a1;
- (BOOL)setPhotoFeatureFlags:(id)a0 properties:(id)a1 error:(id *)a2;

@end
