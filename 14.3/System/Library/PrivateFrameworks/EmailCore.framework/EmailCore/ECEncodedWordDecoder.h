@class NSData, NSNumber, NSString;

@interface ECEncodedWordDecoder : NSObject

@property (readonly, copy, nonatomic) NSData *headerData;
@property (retain, nonatomic) NSNumber *stringEncoding;
@property (copy, nonatomic) NSString *language;
@property (nonatomic) long long encodedWordEncoding;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } encodedTextRange;

- (id)init;
- (void).cxx_destruct;
- (id)_lineSeparator;
- (id)_encodedWordStartSequence;
- (id)_encodedWordDelimiter;
- (id)_encodedWordEndSequence;
- (id)_encodedWordLanguageDelimiter;
- (BOOL)_decodeBEncodedTextToData:(id)a0;
- (BOOL)_decodeQEncodedTextToData:(id)a0;
- (void)_enumerateQByteRangesUsingBlock:(id /* block */)a0;
- (id)initWithHeaderData:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })identifyRangeOfEncodedWordAtIndex:(unsigned long long)a0;
- (BOOL)decodeEncodedTextToData:(id)a0;

@end
