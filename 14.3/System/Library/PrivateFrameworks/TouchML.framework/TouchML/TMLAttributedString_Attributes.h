@class UIFont, NSString, NSTextAttachment, NSParagraphStyle, NSShadow, NSMutableDictionary, NSNumber, UIColor;

@interface TMLAttributedString_Attributes : NSObject <NSCopying, TMLRuntimeObject> {
    BOOL _created;
}

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (copy, nonatomic) NSMutableDictionary *attributes;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long ligature;
@property (retain, nonatomic) NSNumber *kern;
@property (nonatomic) long long strikethroughStyle;
@property (nonatomic) long long underlineStyle;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) NSString *textEffect;
@property (retain, nonatomic) NSTextAttachment *attachment;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) double obliqueness;
@property (nonatomic) double expansion;
@property (retain, nonatomic) id link;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) double baselineOffset;
@property (nonatomic) long long superscript;
@property (nonatomic) long long verticalGlyphForm;
@property (nonatomic) BOOL accessibilitySpeechPunctuation;
@property (retain, nonatomic) NSString *accessibilitySpeechLanguage;
@property (retain, nonatomic) NSNumber *accessibilitySpeechPitch;
@property (retain, nonatomic) NSNumber *accessibilitySpeechQueueAnnouncement;
@property (retain, nonatomic) NSString *accessibilitySpeechIPANotation;
@property (retain, nonatomic) NSNumber *accessibilityTextHeadingLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setValue:(id)a0 forUndefinedKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)setAttribute:(id)a0 value:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)tmlObjectCompleted;
- (void)setAXAttribute:(id)a0 value:(id)a1;

@end
