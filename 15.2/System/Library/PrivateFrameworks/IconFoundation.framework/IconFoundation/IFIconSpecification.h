@class NSArray, NSString;

@interface IFIconSpecification : NSObject

@property (readonly) NSArray *imageSpecifications;
@property (readonly) NSString *name;
@property (readonly) struct CGSize { double width; double height; } maxSize;
@property (readonly) struct CGSize { double width; double height; } minSize;
@property (readonly) double maxScale;
@property (readonly) double minScale;
@property (readonly) NSArray *allImageSpecifications;
@property (readonly) NSArray *variants;
@property (readonly) NSArray *allVariants;

+ (id)watchAppIconSpecification;
+ (id)iosMessagesAppIconSpecification;
+ (id)macosDocumentIconSpecification;
+ (id)macosIconSpecification;
+ (id)iosDocumentGlyphSpecification;
+ (id)defaultIconSpecification;
+ (id)macosTemplateIconSpecification;
+ (id)iosAppIconSpecification;
+ (id)iosDocumentIconSpecification;

- (id)_initWithName:(id)a0 imageSpecifiactions:(id)a1 variants:(id)a2;
- (id)imageSpecificationsMatchingPredicate:(id)a0;
- (id)description;
- (id)imageSpecificationForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (id)imageSpecificationsWithTags:(id)a0 withoutTags:(id)a1;

@end
