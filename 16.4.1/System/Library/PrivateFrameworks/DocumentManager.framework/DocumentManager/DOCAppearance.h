@class UIColor, NSString;

@interface DOCAppearance : NSObject <NSSecureCoding, NSCopying> {
    NSString *_collectionCreateButtonTitle;
}

@property (class, readonly) DOCAppearance *documentsPickerAppearance;
@property (class, readonly) DOCAppearance *recentsPopoverAppearance;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) UIColor *backgroundColor;
@property (nonatomic) double compactHorizontalTableStackSpacing;
@property (nonatomic) double regularHorizontalTableStackSpacing;
@property (nonatomic) double fullHorizontalTableStackSpacing;
@property (retain, nonatomic) UIColor *largeTitleColor;
@property (nonatomic) BOOL showsCreateButton;
@property (nonatomic) BOOL shouldShowFileExtensions;
@property (nonatomic) BOOL forceClearBackground;
@property (nonatomic) unsigned long long browserUserInterfaceStyle;
@property (nonatomic) double defaultDocumentAspectRatio;
@property (retain, nonatomic) NSString *collectionCreateButtonTitle;
@property BOOL alwaysEnableScrollInSourceView;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
