@class NSCharacterSet;

@interface CVNLPTextDecoderUtilities : NSObject {
    NSCharacterSet *_whitespaceCharSet;
    NSCharacterSet *_lowercaseCharSet;
    NSCharacterSet *_uppercaseCharSet;
    NSCharacterSet *_separatorCharSet;
    NSCharacterSet *_punctuationCharSet;
    NSCharacterSet *_latinNumeralCharSet;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isStringWhitespace:(id)a0;
- (BOOL)isLatinCharacter:(id)a0;
- (BOOL)isStringPunctuation:(id)a0;
- (BOOL)isStringLatinNumeral:(id)a0;
- (unsigned long long)unicodeFromCharacterString:(id)a0;
- (BOOL)isStringWordSeparator:(id)a0;
- (BOOL)isStringLowercase:(id)a0;
- (BOOL)isStringUppercase:(id)a0;
- (unsigned long long)lengthOfString:(id)a0;

@end
