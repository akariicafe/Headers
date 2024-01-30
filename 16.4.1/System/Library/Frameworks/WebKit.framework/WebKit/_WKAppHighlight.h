@class NSData, NSString, UIImage;

@interface _WKAppHighlight : NSObject {
    struct RetainPtr<NSData> { void *m_ptr; } _highlight;
    struct RetainPtr<NSString> { void *m_ptr; } _text;
    struct RetainPtr<UIImage> { void *m_ptr; } _image;
}

@property (readonly, nonatomic) NSData *highlight;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIImage *image;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithHighlight:(id)a0 text:(id)a1 image:(id)a2;

@end
