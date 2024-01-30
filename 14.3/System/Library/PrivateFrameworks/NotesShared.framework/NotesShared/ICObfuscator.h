@class ICRandomTextGenerator, NSMutableDictionary;

@interface ICObfuscator : NSObject

@property (retain, nonatomic) ICRandomTextGenerator *randomTextGenerator;
@property (retain, nonatomic) NSMutableDictionary *imageMap;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)obfuscatedStringOfLength:(unsigned long long)a0;
- (id)obfuscateString:(id)a0;
- (id)obfuscatedImageOfSize:(struct CGSize { double x0; double x1; })a0;

@end
