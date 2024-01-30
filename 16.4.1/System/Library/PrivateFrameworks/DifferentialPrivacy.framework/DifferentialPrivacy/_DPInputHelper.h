@class NSNumberFormatter;

@interface _DPInputHelper : NSObject

@property (readonly, nonatomic) NSNumberFormatter *fmt;

- (id)numberFromString:(id)a0;
- (id)nonEmptyNonWhitespaceStringsFromFileAtPath:(id)a0;
- (id)nonEmptyStringsFromFileAtPath:(id)a0;
- (id)nonEmptyStringsFromFileAtPath:(id)a0 encoding:(unsigned long long)a1;
- (id)init;
- (id)numbersFromFileAtPath:(id)a0;
- (id)nonEmptyStringsFromFileAtPath:(id)a0 separatedBy:(id)a1 encoding:(unsigned long long)a2;
- (void).cxx_destruct;

@end
