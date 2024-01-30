@class NSString;

@interface NTKFaceBundle : NSObject

@property (class, readonly, nonatomic) NSString *identifier;

@property (readonly, nonatomic) Class faceClass;
@property (readonly, nonatomic) Class faceViewClass;
@property (readonly, nonatomic) NSString *galleryDescriptionText;
@property (readonly, nonatomic) NSString *galleryTitle;

+ (id)imageWithName:(id)a0;
+ (id)localizedStringForKey:(id)a0 table:(id)a1 comment:(id)a2;
+ (id)logCategoryName;
+ (id)localizedStringForKey:(id)a0 comment:(id)a1;
+ (id)logObject;

- (id)defaultFaceForDevice:(id)a0;
- (id)galleryFacesForDevice:(id)a0;
- (id)heroFacesForDevice:(id)a0;
- (BOOL)isHardwareSpecific;

@end
