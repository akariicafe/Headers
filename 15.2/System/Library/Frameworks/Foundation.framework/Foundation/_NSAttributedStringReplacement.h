@interface _NSAttributedStringReplacement : NSObject

@property (readonly) long long index;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } specifierRangeInFormatString;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } replacementRangeInResult;
@property (readonly) id argument;
@property (readonly) long long replacementKind;

+ (id)_replacementsFromMetadataArray:(id)a0;

- (id)_initWithMetadata:(id)a0;
- (void)dealloc;

@end
