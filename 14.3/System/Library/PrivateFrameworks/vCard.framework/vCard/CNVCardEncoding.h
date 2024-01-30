@class NSString;

@interface CNVCardEncoding : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long stringEncoding;

+ (id)standardEncodings;
+ (id)encodingsFromUserDefaults;
+ (id)utf8Encoding;
+ (id)makeStandardEncodings;
+ (id)asciiEncoding;
+ (id)isoLatin1Encoding;
+ (id)macRomanEncoding;
+ (id)preferredEncodingInUserDefaults;
+ (id)addPreferredEncoding:(id)a0 toEncodings:(id)a1;
+ (id)encodingWithName:(id)a0 stringEncoding:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 stringEncoding:(unsigned long long)a1;

@end
