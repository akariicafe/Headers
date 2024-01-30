@class NSArray, NSString, NSNumber, SAUIImageResource;

@interface SAUIImageView : SAAceView

@property (copy, nonatomic) NSArray *commands;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSNumber *tintColor;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
