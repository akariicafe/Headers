@class UIImage, NSString;

@interface CKCellData : NSObject

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *identifer;

- (id)initWithImage:(id)a0 withTitle:(id)a1 withSubtitle:(id)a2;
- (id)initWithImage:(id)a0 withTitle:(id)a1;
- (void).cxx_destruct;

@end
