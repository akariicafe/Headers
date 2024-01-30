@class NSString, NSDictionary;

@interface PFVideoComplement : NSObject {
    NSDictionary *_metadata;
    NSString *_originalPairingIdentifier;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _originalImageDisplayTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _originalVideoDuration;
    BOOL _didReadOriginalMetadata;
}

@property (class, readonly) NSString *currentFormatVersion;

@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } imageDisplayTime;
@property (readonly, copy, nonatomic) NSString *originalPairingIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originalImageDisplayTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originalVideoDuration;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *imagePath;

- (id)propertyListRepresentation;
- (id)initWithPropertyList:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithBundleAtURL:(id)a0;
- (id)initWithPathToVideo:(id)a0 pathToImage:(id)a1 imageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 pairingIdentifier:(id)a3;
- (BOOL)writeToBundleAtURL:(id)a0 error:(id *)a1;
- (id)initWithPathToVideo:(id)a0 pathToImage:(id)a1;
- (BOOL)_getSourceFilePath:(id)a0 destinationFilePath:(id)a1 areOnSameVolume:(BOOL *)a2 volumeSupportsCloning:(BOOL *)a3;
- (void)_readMetadataIfNeeded;
- (BOOL)copyOrLinkPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (int)numberOfFramesRecoveredWithError:(id *)a0;

@end
