@class PVColorSpace;
@protocol JFXMediaItemDelegate;

@interface JFXMediaItem : NSObject <NSCopying>

@property (nonatomic) long long mediaType;
@property (nonatomic) long long mediaState;
@property (nonatomic) long long mediaLoadState;
@property (nonatomic) int durationAt30fps;
@property (nonatomic) long long interfaceOrientationForDisplay;
@property (readonly, nonatomic) PVColorSpace *colorSpace;
@property (readonly, nonatomic) int playableMediaContentMode;
@property (weak, nonatomic) id<JFXMediaItemDelegate> delegate;

+ (BOOL)supportsSecureCoding;

- (id)info;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)canBeAddedToSequence;
- (BOOL)canHaveFilter;
- (BOOL)canSaveToCameraRoll;
- (BOOL)hasAudibleCharacteristic;
- (BOOL)hasPhotoCharacteristic;
- (BOOL)hasVisualCharacteristic;
- (id)initWithInfo:(id)a0 delegate:(id)a1;

@end
