@class NSString, NSURL, NSDate, NSNumber;
@protocol PLUniformTypeIdentifierIdentity, PLCodecIdentity;

@interface PLValidatedExternalResource : NSObject <PLResourceIdentity, NSCopying>

@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long dataLength;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) id<PLCodecIdentity> codecID;
@property (nonatomic) int qualitySortValue;
@property (nonatomic) short trashedState;
@property (retain, nonatomic) NSDate *trashedDate;
@property (nonatomic) long long ptpTrashedState;
@property (retain, nonatomic) NSNumber *sidecarIndex;
@property (readonly, nonatomic) BOOL isDerivative;
@property (readonly, nonatomic) BOOL hasRecipe;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isPlayableVideo;
- (void)persistResourceTypeToFileURL;
- (BOOL)isDefaultOrientation;
- (unsigned long long)cplTypeWithAssetID:(id)a0;
- (BOOL)isEqualToValidatedExternalResource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTrashedStateFromURL;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)a0 height:(long long)a1 isNativeColorSpace:(BOOL)a2 isLosslessEncoding:(BOOL)a3 isCuratedPreview:(BOOL)a4;

@end
