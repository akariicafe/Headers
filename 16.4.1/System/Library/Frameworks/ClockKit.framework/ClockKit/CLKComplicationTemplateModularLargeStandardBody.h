@class CLKTextProvider, CLKImageProvider;

@interface CLKComplicationTemplateModularLargeStandardBody : CLKComplicationTemplate

@property (copy, nonatomic) CLKImageProvider *body1ImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider;
@property (nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKTextProvider *body2TextProvider;

+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2;
+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2 body2TextProvider:(id)a3;
+ (id)templateWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1;
+ (id)templateWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1 body2TextProvider:(id)a2;

- (void).cxx_destruct;
- (id)initWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1 body2TextProvider:(id)a2;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2 body2TextProvider:(id)a3;
- (id)initWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1;

@end
