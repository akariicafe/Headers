@class NSString, NSDictionary, UIImage, NSURL;

@interface WKDynamicWallpaper : WKAbstractWallpaper <WKValueBasedWallpaper>

@property (retain, nonatomic) NSDictionary *_dynamicDictionary;
@property (retain, nonatomic) UIImage *_thumbnailImage;
@property (readonly, nonatomic) long long identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long representedType;
@property (readonly, nonatomic) unsigned long long backingType;
@property (readonly, nonatomic) BOOL supportsSerialization;
@property (readonly, nonatomic) BOOL supportsCopying;
@property (readonly, copy, nonatomic) NSURL *thumbnailImageURL;
@property (readonly, nonatomic) UIImage *thumbnailImage;

+ (id)na_identity;

@end
