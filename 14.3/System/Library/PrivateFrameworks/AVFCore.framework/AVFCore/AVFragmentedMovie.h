@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;

+ (BOOL)expectsPropertyRevisedNotifications;

- (Class)_classForMovieTracks;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;
- (id)trackWithTrackID:(int)a0;
- (BOOL)_mindsFragments;
- (id)tracksWithMediaType:(id)a0;
- (BOOL)_needsLegacyChangeNotifications;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (id)initWithURL:(id)a0 options:(id)a1;

@end
