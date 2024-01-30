@class NSString, _UIContentViewLabelConfiguration;

@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {
    struct { unsigned char hasCustomizedAxesPreservingSuperviewLayoutMargins : 1; unsigned char hasCustomizedDirectionalLayoutMargins : 1; } _configurationFlags;
    unsigned long long _axesPreservingSuperviewLayoutMargins;
    long long _defaultStyle;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _directionalLayoutMargins;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UIContentViewLabelConfiguration *textLabel;
@property (nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; } directionalLayoutMargins;
@property (nonatomic) BOOL resetsVerticalLayoutMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultGroupedHeaderConfiguration;
+ (id)defaultGroupedFooterConfiguration;
+ (id)defaultHeaderConfiguration;
+ (id)defaultFooterConfiguration;

- (void)encodeWithCoder:(id)a0;
- (id)updatedConfigurationForState:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)createContentView;
- (void)applyToContentView:(id)a0;
- (id)updatedConfigurationForState:(unsigned long long)a0 traitCollection:(id)a1;

@end
