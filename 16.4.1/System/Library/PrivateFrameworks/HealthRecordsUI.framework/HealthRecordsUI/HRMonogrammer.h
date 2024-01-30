@class CNAvatarImageRenderer;

@interface HRMonogrammer : NSObject

@property (retain, nonatomic) CNAvatarImageRenderer *avatarRenderer;
@property (nonatomic) struct CGSize { double width; double height; } monogramSize;

- (void).cxx_destruct;
- (id)initWithDiameter:(double)a0;
- (id)_defaultScopeForMonogram;
- (id)makeImageForTitle:(id)a0;
- (id)monogramForFirstWordFromText:(id)a0;

@end
