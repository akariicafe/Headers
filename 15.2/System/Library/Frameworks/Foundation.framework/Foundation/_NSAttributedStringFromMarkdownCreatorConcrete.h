@class NSString, NSMutableAttributedString;

@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject <_NSAttributedStringFromMarkdownCreator> {
    NSMutableAttributedString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finalizeWithLanguageIdentifier:(id)a0;
- (id)parseExtendedAttributesFromData:(id)a0 error:(id *)a1;
- (void)appendString:(id)a0 with:(id)a1;
- (id)init;
- (void)appendString:(id)a0;
- (id)result;
- (unsigned short)lastCharacter;
- (void)dealloc;

@end
