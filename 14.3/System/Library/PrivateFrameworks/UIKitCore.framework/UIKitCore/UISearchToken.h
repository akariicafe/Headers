@class NSString, UIImage;

@interface UISearchToken : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id representedObject;

+ (id)tokenWithImage:(id)a0;
+ (id)tokenWithIcon:(id)a0 text:(id)a1;

- (void).cxx_destruct;
- (id)_initToken;

@end
