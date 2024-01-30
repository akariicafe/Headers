@class NSNumberFormatter;

@interface _DPInputHelper : NSObject

@property (readonly, nonatomic) NSNumberFormatter *fmt;

- (id)nonEmptyStringsFromFileAtPath:(id)a0;
- (id)nonEmptyStringsFromFileAtPath:(id)a0 encoding:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)a0;
- (id)numberFromString:(id)a0;
- (id)nonEmptyStringsFromFileAtPath:(id)a0 separatedBy:(id)a1 encoding:(unsigned long long)a2;
- (id)numbersFromFileAtPath:(id)a0;

@end
