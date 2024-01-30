@class NSString, NSData;

@interface ECEncodedWordEncoder : NSObject

@property (readonly, nonatomic) unsigned long long stringEncoding;
@property (readonly, copy, nonatomic) NSString *language;
@property (readonly, copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSString *characterSet;
@property (nonatomic) long long encodedWordEncoding;
@property (copy, nonatomic) NSData *decodedText;
@property (nonatomic) unsigned long long singleEncodedWordLength;
@property (readonly, nonatomic) unsigned long long minimumLengthOfEncodedWord;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)_prepareForEncoding;
- (unsigned long long)_lengthOfQEncodedTextForBytes:(const char *)a0 length:(unsigned long long)a1;
- (unsigned long long)_bEncodeToHeaderData:(id)a0 currentLineLength:(unsigned long long)a1;
- (unsigned long long)_qEncodeToHeaderData:(id)a0 currentLineLength:(unsigned long long)a1;
- (unsigned long long)_writeEncodedWordPreambleToBuffer:(char *)a0 length:(unsigned long long)a1;
- (void)_writeQEncodedTextAndEndSequenceToHeaderBytes:(char *)a0 fromDecodedBytes:(const char *)a1 length:(unsigned long long)a2;
- (BOOL)_getBytesWithoutSplittingComposedCharacters:(void *)a0 targetQEncodedTextLength:(unsigned long long)a1 usedLength:(unsigned long long *)a2 splitComposedCharacterSequence:(BOOL *)a3 usedQEncodedTextLength:(unsigned long long *)a4 extraLength:(unsigned long long *)a5 extraQEncodedTextLength:(unsigned long long *)a6 fromString:(id)a7 stringEncoding:(unsigned long long)a8 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a9 remainingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a10;
- (const char *)_findNextByteThatNeedsQEncodingBetweenStartByte:(const char *)a0 endByte:(const char *)a1;
- (id)initWithString:(id)a0 stringEncoding:(unsigned long long)a1 language:(id)a2;
- (unsigned long long)encodeToHeaderData:(id)a0 currentLineLength:(unsigned long long)a1;

@end
