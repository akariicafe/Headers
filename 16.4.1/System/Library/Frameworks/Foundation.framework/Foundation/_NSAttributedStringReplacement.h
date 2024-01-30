@interface _NSAttributedStringReplacement : NSObject

@property (readonly) long long index;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } specifierRangeInFormatString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRangeInResult;
@property (readonly) id argument;
@property (readonly) long long replacementKind;

+ (id)_replacementsFromMetadataArray:(id)a0;

- (void)dealloc;
- (id)initWithIndex:(long long)a0 specifierRangeInFormatString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementRangeInResult:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 replacementKind:(long long)a3 argument:(id)a4;
- (id)_initWithMetadata:(id)a0;

@end
