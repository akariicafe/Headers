@class NSString, NSURL, PLVirtualResourceUniformTypeIdentifierProxy, NSDate;
@protocol PLAssetID, PLResourceDataStore, PLResourceDataStoreKey, PLCodecIdentity, PLUniformTypeIdentifierIdentity;

@interface PLVirtualResource : NSObject <PLWriteableResource, PLValidatesResourceModel>

@property (readonly, nonatomic) PLVirtualResourceUniformTypeIdentifierProxy *uniformTypeIdentifier;
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
@property (retain, nonatomic) id<PLCodecIdentity> codecID;
@property (retain, nonatomic) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)dataLength;
- (BOOL)isPlayableVideo;
- (BOOL)isDefaultOrientation;
- (BOOL)isDerivative;
- (void).cxx_destruct;
- (float)scaleGivenAssetHasAdjustments:(BOOL)a0 currentWidth:(long long)a1 currentHeight:(long long)a2;
- (BOOL)isInCloud;
- (id)initWithAsset:(id)a0 resourceType:(unsigned int)a1 version:(unsigned int)a2 recipeID:(unsigned int)a3;
- (unsigned long long)cplType;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (id)validateForAssetID:(id)a0 resourceIdentity:(id)a1;
- (id)photosCTLJSONDict;
- (id)initWithRecipe:(id)a0 forAsset:(id)a1;
- (long long)estimatedDataLength;
- (id)singleLineDescription;

@end
