@class NSString, UIImage;

@interface CNActionItem : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL disabled;

- (void).cxx_destruct;
- (id)description;
- (id)initWithImage:(id)a0 type:(id)a1;

@end
