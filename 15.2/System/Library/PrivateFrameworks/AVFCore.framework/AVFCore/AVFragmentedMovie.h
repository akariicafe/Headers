@class NSArray;

@interface AVFragmentedMovie : AVMovie <AVFragmentMinding>

@property (readonly, nonatomic) NSArray *tracks;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) BOOL associatedWithFragmentMinder;

+ (BOOL)expectsPropertyRevisedNotifications;

- (id)initWithURL:(id)a0 options:(id)a1;
- (id)tracksWithMediaType:(id)a0;
- (Class)_classForMovieTracks;
- (id)trackWithTrackID:(int)a0;
- (id)tracksWithMediaCharacteristic:(id)a0;
- (BOOL)_mindsFragments;
- (BOOL)_needsLegacyChangeNotifications;
- (void)_setIsAssociatedWithFragmentMinder:(BOOL)a0;

@end
