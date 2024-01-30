@class NSString, UIImage;

@interface WFSegmentedControlValue : NSObject

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) id representedObject;

+ (id)valueWithDisplayName:(id)a0 representedObject:(id)a1;
+ (id)valueWithDisplayName:(id)a0;
+ (id)valueWithImage:(id)a0;
+ (id)valueWithImage:(id)a0 representedObject:(id)a1;

- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 image:(id)a1 representedObject:(id)a2;

@end
