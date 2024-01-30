@class NSString, UIImage;

@interface NUPageStyle : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleImage;
@property (copy, nonatomic) NSString *nextButtonTitle;
@property (nonatomic) BOOL hideToolbar;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
