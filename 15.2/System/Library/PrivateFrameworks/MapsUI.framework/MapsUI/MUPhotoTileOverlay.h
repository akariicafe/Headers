@class NSString;

@interface MUPhotoTileOverlay : NSObject

@property (readonly, nonatomic) BOOL shouldBeShown;
@property (retain, nonatomic) NSString *tileTitle;
@property (retain, nonatomic) NSString *attributionTitle;
@property (retain, nonatomic) NSString *badgeTitle;

- (void).cxx_destruct;

@end
