@class CLKImageProvider, CLKTextProvider, NSDictionary, NSDate;

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider;
@property (copy, nonatomic) NSDate *contentDate;
@property (nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst;
@property (copy, nonatomic) NSDictionary *additionalContentAttributes;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider;

+ (id)templateWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 bodyTextProvider:(id)a2;
+ (id)templateWithHeaderTextProvider:(id)a0 bodyTextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateDateKeysWithBlock:(id /* block */)a0;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)a0;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (id)initWithHeaderImageProvider:(id)a0 headerTextProvider:(id)a1 bodyTextProvider:(id)a2;
- (id)initWithHeaderTextProvider:(id)a0 bodyTextProvider:(id)a1;

@end
