@class NSDate, NSDictionary, CLKTextProvider;

@interface CLKComplicationTemplateModularLargeTallBody : CLKComplicationTemplate

@property (copy, nonatomic) CLKTextProvider *headerTrailingTextProvider;
@property (copy, nonatomic) NSDate *contentDate;
@property (nonatomic) BOOL shouldTruncateHeaderLeadingLabelFirst;
@property (copy, nonatomic) NSDictionary *additionalContentAttributes;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKTextProvider *bodyTextProvider;

+ (id)templateWithHeaderTextProvider:(id)a0 bodyTextProvider:(id)a1;

- (void).cxx_destruct;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)a0;
- (long long)compatibleFamily;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)a0;
- (void)_enumerateDateKeysWithBlock:(id /* block */)a0;
- (id)initWithHeaderTextProvider:(id)a0 bodyTextProvider:(id)a1;

@end
