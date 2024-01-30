@class NSString, TSPData, TSDAttribution;

@interface TSDMediaInfo : TSDStyledInfo <TSDFittingOnInsertion> {
    TSDAttribution *_attribution;
    struct { unsigned char isPlaceholder : 1; unsigned char wasMediaReplaced : 1; } _flags;
}

@property (nonatomic) struct CGSize { double width; double height; } originalSize;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } defaultOriginalSize;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL wasMediaReplaced;
@property (nonatomic) unsigned int flags;
@property (readonly, nonatomic) NSString *mediaDisplayName;
@property (readonly, nonatomic) NSString *mediaFileType;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } rawDataSize;
@property (readonly, nonatomic) TSPData *mediaDataForDragging;
@property (readonly, nonatomic) BOOL canResetMediaSize;
@property (readonly, nonatomic) BOOL canBeMediaPlaceholder;
@property (readonly, nonatomic) BOOL canBeReplaced;
@property (copy, nonatomic) TSDAttribution *attribution;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } centerForReplacingWithNewMedia;
@property (readonly, nonatomic) NSString *propertyNameForFlagsCommand;
@property (readonly, nonatomic) NSString *propertyNameForOriginalSizeCommand;
@property (readonly, nonatomic) unsigned short propertyIdForFlagsCommand;
@property (readonly, nonatomic) unsigned short propertyIdForOriginalSizeCommand;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } rawOriginalSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setGeometry:(id)a0;
- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (id)initWithContext:(id)a0 geometry:(id)a1;
- (void)takePropertiesFromReplacedMediaInfo:(id)a0;
- (void)updateGeometryToReplaceMediaInfo:(id)a0;
- (id)copyToInstantiateMasterPlaceholder;
- (id)defaultDescriptiveName;
- (void)scaleDownSizeToFitWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFlagsWithPlaceholder:(BOOL)a0 wasMediaReplaced:(BOOL)a1;

@end
