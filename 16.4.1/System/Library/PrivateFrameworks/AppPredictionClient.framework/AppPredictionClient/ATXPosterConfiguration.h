@class NSString, NSArray, ATXComplication, NSUUID, ATXFaceGalleryItem;

@interface ATXPosterConfiguration : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *extensionBundleIdentifier;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) ATXComplication *inlineComplication;
@property (readonly, copy, nonatomic) NSArray *complications;
@property (readonly, nonatomic) NSUUID *modeUUID;
@property (readonly, copy, nonatomic) NSString *font;
@property (readonly, copy, nonatomic) NSString *color;
@property (readonly, copy, nonatomic) NSString *numberingSystem;
@property (readonly, copy, nonatomic) NSString *posterUUID;
@property (readonly, nonatomic) ATXFaceGalleryItem *galleryItem;

- (void)encodeWithCoder:(id)a0;
- (id)initWithExtensionBundleIdentifier:(id)a0 selected:(BOOL)a1 inlineComplication:(id)a2 complications:(id)a3 modeUUID:(id)a4 active:(BOOL)a5 source:(long long)a6 isCustomFont:(BOOL)a7 isCustomColor:(BOOL)a8 isCustomNumberingSystem:(BOOL)a9;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithExtensionBundleIdentifier:(id)a0 active:(BOOL)a1 selected:(BOOL)a2 inlineComplication:(id)a3 complications:(id)a4 modeUUID:(id)a5 font:(id)a6 color:(id)a7 numberingSystem:(id)a8 posterUUID:(id)a9 galleryItem:(id)a10;
- (id)description;
- (BOOL)isEqualToATXPosterConfiguration:(id)a0;
- (void).cxx_destruct;

@end
