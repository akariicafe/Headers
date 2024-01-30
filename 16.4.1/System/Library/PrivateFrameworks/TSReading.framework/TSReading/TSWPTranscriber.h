@class NSString, NSLocale;

@interface TSWPTranscriber : NSObject {
    NSString *_displayName;
    NSString *_identifier;
    NSString *_transformIdentifier;
}

@property (readonly) NSLocale *romanizationLocale;

+ (id)transcriberWithIdentifier:(id)a0 displayName:(id)a1 romanizationLocaleID:(id)a2 transformIdentifier:(id)a3;

- (void)dealloc;
- (id)transcribeText:(id)a0;
- (id)initWithIdentifier:(id)a0 displayName:(id)a1 romanizationLocaleID:(id)a2 transformIdentifier:(id)a3;
- (id)transcribeText:(id)a0 withLocale:(id)a1;

@end
