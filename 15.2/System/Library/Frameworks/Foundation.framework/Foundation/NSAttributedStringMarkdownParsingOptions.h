@class NSString;

@interface NSAttributedStringMarkdownParsingOptions : NSObject <NSCopying>

@property BOOL allowsExtendedAttributes;
@property long long interpretedSyntax;
@property long long failurePolicy;
@property (copy) NSString *languageCode;

+ (id)_localizedAttributedStringParsingOptions;
+ (id)allowingExtendedAttributes;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
