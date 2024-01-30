@class NSString;
@protocol ECMIMECharset;

@interface ECHTMLStringAndMIMECharset : NSObject

@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) id<ECMIMECharset> charset;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 charset:(id)a1;

@end
