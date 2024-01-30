@class NSString, UIImage;

@interface _UICalloutBarSystemButtonDescription : NSObject {
    NSString *m_title;
    UIImage *m_image;
    int m_type;
    BOOL m_requiresAuthenticatedTouch;
}

@property (readonly, nonatomic) SEL action;
@property (copy, nonatomic) id /* block */ configurationBlock;

+ (id)buttonDescriptionWithTitle:(id)a0 action:(SEL)a1 type:(int)a2 requiresAuthenticatedTouch:(BOOL)a3;
+ (id)buttonDescriptionWithTitle:(id)a0 action:(SEL)a1 type:(int)a2;
+ (id)buttonDescriptionWithImage:(id)a0 action:(SEL)a1 type:(int)a2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 orImage:(id)a1 action:(SEL)a2 type:(int)a3 requiresAuthenticatedTouch:(BOOL)a4;
- (id)materializeButtonInView:(id)a0;

@end
