@class NSString, UIImage;

@interface SMUMenuItem : NSObject

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) UIImage *glyph;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL busy;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 identifier:(id)a1;

@end
