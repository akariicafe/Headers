@class PVColorSpace;
@protocol JFXMediaItemDelegate;

@interface JFXMediaItem : NSObject <NSCopying>

@property (nonatomic) long long mediaType;
@property (nonatomic) long long mediaState;
@property (nonatomic) long long mediaLoadState;
@property (nonatomic) int durationAt30fps;
@property (nonatomic) long long interfaceOrientationForDisplay;
@property (readonly, nonatomic) PVColorSpace *colorSpace;
@property (weak, nonatomic) id<JFXMediaItemDelegate> delegate;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)info;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasAudibleCharacteristic;
- (id)initWithInfo:(id)a0 delegate:(id)a1;
- (BOOL)canSaveToCameraRoll;
- (BOOL)canBeAddedToSequence;
- (BOOL)canHaveFilter;
- (BOOL)hasVisualCharacteristic;
- (BOOL)hasPhotoCharacteristic;

@end
