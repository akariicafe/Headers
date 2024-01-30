@class NSString;

@interface PUPickerAssetPlaybackStyleFilter : NSObject <PUPickerFilter>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long playbackStyle;
@property (readonly, nonatomic) BOOL isValidFilter;
@property (readonly, nonatomic) BOOL allowsSearch;
@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPlaybackStyle:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)generatedRequiredAssetTypes;
- (unsigned long long)generatedPossibleAssetTypes;
- (id)generatedAssetPredicate;

@end
