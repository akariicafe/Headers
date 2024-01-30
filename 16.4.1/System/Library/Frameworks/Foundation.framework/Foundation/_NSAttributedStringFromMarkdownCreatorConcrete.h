@class NSString, NSMutableAttributedString;

@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject <_NSAttributedStringFromMarkdownCreator> {
    NSMutableAttributedString *_result;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)result;
- (void)appendString:(id)a0;
- (unsigned short)lastCharacter;
- (id)parseExtendedAttributesFromData:(id)a0 error:(id *)a1;
- (void)finalizeWithLanguageIdentifier:(id)a0;
- (void)appendString:(id)a0 with:(id)a1;
- (void)dealloc;
- (id)init;

@end
