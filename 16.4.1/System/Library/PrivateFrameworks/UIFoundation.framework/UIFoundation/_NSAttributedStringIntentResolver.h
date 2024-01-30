@class NSString;

@interface _NSAttributedStringIntentResolver : NSObject <_NSAttributedStringIntentResolution>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fontAttributeValueForInlineIntent:(long long)a0 suggestedBaseFont:(id)a1 suggestingTheDefaultFont:(BOOL)a2;
+ (id)attributedStringByResolvingString:(id)a0;
+ (void)resolveAttributedString:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)_replaceInlinePresentationIntent:(id)a0 get:(id /* block */)a1 set:(id /* block */)a2;
+ (void)_replaceInlinePresentationIntentInString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 value:(id)a2;
+ (id)attributesByResolvingIntentsInAttributes:(id)a0;
+ (id)fontAttributeValueForInlinePresentationIntent:(unsigned long long)a0 suggestedBaseFont:(id)a1 suggestingTheDefaultFont:(BOOL)a2;


@end
