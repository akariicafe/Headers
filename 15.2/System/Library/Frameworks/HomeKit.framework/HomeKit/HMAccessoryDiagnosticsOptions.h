@class NSNumber;

@interface HMAccessoryDiagnosticsOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL metadataRequired;
@property (readonly, nonatomic) NSNumber *logSize;
@property (readonly, nonatomic) BOOL recordAudio;
@property (readonly, nonatomic) BOOL enableAudioClips;
@property (readonly, nonatomic) NSNumber *delay;
@property (readonly, nonatomic) long long snapshotType;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)payloadMetadata;
- (id)initWithLogSizeBytes:(id)a0 delaySeconds:(id)a1 snapshotType:(long long)a2 recordAudio:(BOOL)a3 enableAudioClips:(BOOL)a4 cloudkitMetadataRequired:(BOOL)a5;

@end
