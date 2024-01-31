@class CLKTextProvider, CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicRectangularStandardBody : CLKComplicationTemplate

@property (copy, nonatomic) CLKFullColorImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *body1TextProvider;
@property (copy, nonatomic) CLKTextProvider *body2TextProvider;

+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2;
+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2 body2TextProvider:(id)a3;
+ (id)templateWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1;
+ (id)templateWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1 body2TextProvider:(id)a2;

- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(id /* block */)a0;
- (id)initWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1 body2TextProvider:(id)a2;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 body1TextProvider:(id)a2 body2TextProvider:(id)a3;
- (id)initWithHeaderTextProvider:(id)a0 body1TextProvider:(id)a1;

@end
