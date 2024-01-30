@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (void)setString:(id)a0;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)string;
- (void)appendString:(id)a0;
- (id)description;
- (int)runType;
- (void)copyPropertiesFrom:(id)a0;
- (id)initWithParagraph:(id)a0;
- (BOOL)binaryWriterContentFlag;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)setPropertiesForDocument;
- (void)clearString;
- (id)initWithParagraph:(id)a0 string:(id)a1;

@end
