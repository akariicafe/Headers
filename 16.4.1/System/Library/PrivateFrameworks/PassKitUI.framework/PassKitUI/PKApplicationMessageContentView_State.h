@class PKApplicationMessageContent, UIColor, UIFont, UIImage, PKApplicationMessageIcon, NSAttributedString;

@interface PKApplicationMessageContentView_State : NSObject {
    PKApplicationMessageContent *_source;
    struct { BOOL dismiss; BOOL icon; BOOL title; BOOL body; } _visibility;
    PKApplicationMessageIcon *_icon;
    UIImage *_iconImage;
    UIColor *_iconImageTintColor;
    UIFont *_titleFont;
    NSAttributedString *_title;
    UIFont *_bodyFont;
    NSAttributedString *_body;
}

- (id)init;
- (void).cxx_destruct;

@end
