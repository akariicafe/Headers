@class NSArray, SBIcon;

@interface SBPlaceholderIcon : SBIcon {
    id _nodeIdentifier;
    SBIcon *_icon;
    NSArray *_icons;
}

@property (readonly, nonatomic) SBIcon *referencedIcon;
@property (readonly, copy, nonatomic) NSArray *referencedIcons;

+ (id)grabbedIconPlaceholderForIcon:(id)a0;
+ (id)grabbedIconPlaceholderForIcons:(id)a0;
+ (id)placeholderForIcon:(id)a0;
+ (id)placeholderNodeIdentifierForIcon:(id)a0;
+ (id)placeholderNodeIdentifierForIconNodeIdentifier:(id)a0;
+ (BOOL)hasIconImage;
+ (id)clusteredIconPlaceholderForIcons:(id)a0;

- (id)automationID;
- (id)genericIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)folder;
- (void).cxx_destruct;
- (BOOL)isUninstallSupported;
- (BOOL)referencesIcon:(id)a0;
- (BOOL)isPlaceholder;
- (BOOL)referencesIconWithIdentifier:(id)a0;
- (id)generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)_initWithNodeIdentifier:(id)a0 icon:(id)a1;
- (id)_initWithNodeIdentifier:(id)a0 icons:(id)a1;
- (id)gridCellImage;
- (id)nodeIdentifier;

@end
