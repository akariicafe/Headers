@class NSString, CKMessageEntryTextViewAccessibility;

@interface AXEmojiConversionCandidateElement : UIAccessibilityElement

@property (retain, nonatomic) CKMessageEntryTextViewAccessibility *textView;
@property (copy, nonatomic) NSString *candidateString;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } candidateRange;
@property (copy, nonatomic) id candidateEmojiList;
@property (copy, nonatomic) NSString *conversionLanguage;
@property (readonly, nonatomic) unsigned long long currentIndex;
@property (readonly, nonatomic) id currentEmoji;

- (id)accessibilityLabel;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (id)candidateEmojiArray;
- (BOOL)selectEmoji:(id)a0;

@end
