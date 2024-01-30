@class NSString, NSURL, NSDate, NSNumber, PLUniformTypeIdentifier;

@interface PLValidatedExternalResource : NSObject <PLResourceIdentity, NSCopying>

@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (copy, nonatomic) NSURL *fileURL;
@property (nonatomic) long long dataLength;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (retain, nonatomic) NSString *codecFourCharCode;
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

+ (id)resourceWithExternalResource:(id)a0;

- (BOOL)isEqualToValidatedExternalResource:(id)a0;
- (BOOL)isDefaultOrientation;
- (BOOL)isPlayableVideo;
- (void).cxx_destruct;
- (id)init;
- (void)persistResourceTypeToFileURL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTrashedStateFromURL;
- (unsigned long long)cplTypeWithAssetID:(id)a0;
- (void)setQualitySortValueBasedOnAssetWidth:(long long)a0 height:(long long)a1 isNativeColorSpace:(BOOL)a2 isLosslessEncoding:(BOOL)a3;

@end
