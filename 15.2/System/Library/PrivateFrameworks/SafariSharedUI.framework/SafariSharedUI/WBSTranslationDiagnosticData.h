@class NSString, NSArray, NSMutableArray;

@interface WBSTranslationDiagnosticData : NSObject <NSCopying> {
    NSMutableArray *_extractedParagraphs;
    NSMutableArray *_translatedParagraphs;
}

@property (copy, nonatomic) NSString *extractedParagraphsAsJSON;
@property (copy, nonatomic) NSString *translatedParagraphsAsJSON;
@property (copy, nonatomic) NSString *errorsAsJSON;
@property (copy, nonatomic) NSString *URLString;
@property (readonly, copy, nonatomic) NSArray *extractedParagraphs;
@property (readonly, copy, nonatomic) NSArray *translatedParagraphs;
@property (readonly, copy, nonatomic) NSMutableArray *errors;

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_destinationDirectory;
- (id)saveDiagnosticDataAsTemporaryFiles;
- (void)addExtractedParagraphs:(id)a0;
- (void)addError:(id)a0 forParagraphIdentifier:(id)a1;
- (void)addTranslatedParagraph:(id)a0;
- (id)_createFileForContents:(id)a0 fileName:(id)a1 inDirectory:(id)a2;

@end
