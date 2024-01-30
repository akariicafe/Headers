@interface VCPositionalInfo : NSObject <NSSecureCoding> {
    struct CGSize { double width; double height; } _size;
    double _x;
    double _y;
    double _z;
    struct tagVCSpatialAudioMetadataPositionalInfo { float positionX; float positionY; float positionZ; unsigned int prominence; unsigned int isVisible; unsigned int isInCanvas; } _metadataPositionalInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasPendingChanges;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) unsigned int prominenceIndex;
@property (nonatomic) struct tagAVCPositionalInfo { unsigned int x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; } avcPositionalInfo;
@property (readonly, nonatomic) const struct tagVCSpatialAudioMetadataPositionalInfo { float x0; float x1; float x2; unsigned int x3; unsigned int x4; unsigned int x5; } *metadataPositionalInfo;
@property (nonatomic) BOOL isInCanvas;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)serialize;
- (id)description;
- (void)unserialize:(id)a0;

@end
