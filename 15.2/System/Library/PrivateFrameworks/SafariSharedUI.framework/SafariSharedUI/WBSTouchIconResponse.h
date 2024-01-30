@class UIImage, UIColor, NSString;

@interface WBSTouchIconResponse : WBSSiteMetadataResponse <WBSIconResponse>

@property (readonly, nonatomic) UIImage *touchIcon;
@property (readonly, nonatomic) UIColor *extractedBackgroundColor;
@property (readonly, nonatomic, getter=isGenerated) BOOL generated;
@property (readonly, nonatomic) UIImage *icon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)responseWithURL:(id)a0 touchIcon:(id)a1 generated:(BOOL)a2 extractedBackgroundColor:(id)a3;

@end
