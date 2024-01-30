@class NSString, NSURL, NSDate, PLUniformTypeIdentifier;
@protocol PLResourceDataStore, PLResourceDataStoreKey, PLAssetID;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel>

@property (readonly, nonatomic) NSURL *fileURL;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) unsigned int orientation;
@property (retain, nonatomic) id<PLResourceDataStore> dataStore;
@property (nonatomic) long long dataStoreSubtype;
@property (retain, nonatomic) id<PLResourceDataStoreKey> dataStoreKey;
@property (nonatomic) short remoteAvailability;
@property (nonatomic) float scale;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) int qualitySortValue;
@property (retain, nonatomic) NSString *codecFourCharCodeName;
@property (retain, nonatomic) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (readonly, nonatomic) long long orientedWidth;
@property (readonly, nonatomic) long long orientedHeight;
@property (readonly, copy, nonatomic) id<PLAssetID> assetID;
@property (readonly, nonatomic) unsigned long long cplType;
@property (readonly, nonatomic) short localAvailability;
@property (readonly, nonatomic) short localAvailabilityTarget;
@property (readonly, nonatomic) short remoteAvailabilityTarget;
@property (readonly, nonatomic) long long dataLength;
@property (readonly, nonatomic) long long estimatedDataLength;
@property (readonly, nonatomic) short trashedState;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) short utiConformanceHint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (long long)orientedWidth;
- (id)singleLineDescription;
- (BOOL)isDefaultOrientation;
- (long long)orientedHeight;
- (BOOL)isPlayableVideo;
- (id)initWithRecipe:(id)a0 forAsset:(id)a1;
- (BOOL)isInCloud;
- (id)photosCTLJSONDict;
- (void).cxx_destruct;
- (float)scaleGivenAssetHasAdjustments:(BOOL)a0 currentWidth:(long long)a1 currentHeight:(long long)a2;
- (BOOL)isDerivative;
- (id)initWithAsset:(id)a0 resourceType:(unsigned int)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3;
- (long long)estimatedDataLength;
- (unsigned long long)cplType;
- (long long)dataLength;

@end
