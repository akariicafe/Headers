@class NSString, UIPasteboard, UIImage;

@interface SXPasteboardActionActivity : NSObject <SXActionActivity>

@property (readonly, copy, nonatomic) UIPasteboard *pasteboard;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
