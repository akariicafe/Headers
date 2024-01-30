@class NSURL, NSDictionary, NSString;
@protocol TVImageDecrypter;

@interface TVURLImageRequest : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSDictionary *headers;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<TVImageDecrypter> decrypter;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 headers:(id)a1 decrypter:(id)a2;
- (id)initWithURL:(id)a0 headers:(id)a1 identifier:(id)a2 decrypter:(id)a3;

@end
