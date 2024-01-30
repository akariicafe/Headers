@class NSData;

@interface CNiOSABDependentPropertiesUpdateContext : NSObject

@property (nonatomic) BOOL hasPendingImageData;
@property (nonatomic) BOOL hasPendingCropRect;
@property (nonatomic) BOOL hasPendingThumbnailImageData;
@property (nonatomic) BOOL hasPendingSyncImageData;
@property (copy, nonatomic) NSData *pendingImageData;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pendingCropRect;
@property (copy, nonatomic) NSData *pendingThumbnailImageData;
@property (copy, nonatomic) NSData *pendingFullscreenImageData;
@property (copy, nonatomic) NSData *pendingSyncImageData;

+ (BOOL)shouldSetWatchChanges;

- (void).cxx_destruct;
- (void)resetAllData;
- (BOOL)setWatchChangesforThumbnailImageDataToPerson:(void *)a0 error:(id *)a1;
- (BOOL)flushPendingImageChangesToPerson:(void *)a0 logger:(id)a1 error:(id *)a2;

@end
