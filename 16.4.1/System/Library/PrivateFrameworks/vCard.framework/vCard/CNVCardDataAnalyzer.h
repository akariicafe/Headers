@interface CNVCardDataAnalyzer : NSObject

+ (BOOL)tryVCardEncoding:(unsigned long long)a0 data:(id)a1 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a2;
+ (BOOL)data:(id)a0 hasPrefix:(id)a1;
+ (struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; })analyzeData:(id)a0;
+ (id)data:(id)a0 byPrependingData:(id)a1;
+ (unsigned char)data:(id)a0 byteAtIndex:(unsigned long long)a1;
+ (BOOL)data:(id)a0 containsParam:(id)a1 value:(id)a2 encoding:(unsigned long long)a3;
+ (BOOL)data:(id)a0 containsString:(id)a1 encoding:(unsigned long long)a2;
+ (BOOL)data:(id)a0 containsSubdata:(id)a1;
+ (BOOL)data:(id)a0 isVersion30WithPrefix:(id)a1 encoding:(unsigned long long)a2;
+ (BOOL)tryUTF16BEBOMVCard:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;
+ (BOOL)tryUTF16BEVCard:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;
+ (BOOL)tryUTF16ByInferrence:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;
+ (BOOL)tryUTF16LEBOMVCard:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;
+ (BOOL)tryUTF16LEVCard:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;
+ (BOOL)tryUTF16WithByteOrderMarker:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;
+ (BOOL)tryUTF8VCard:(id)a0 analysis:(struct CNVCardDataAnalysis { unsigned long long x0; BOOL x1; } *)a1;

@end
