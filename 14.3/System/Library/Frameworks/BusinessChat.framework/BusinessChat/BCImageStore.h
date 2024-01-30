@class NSData, NSArray, NSDictionary;

@interface BCImageStore : NSObject

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSArray *rawArray;
@property (retain, nonatomic) NSDictionary *dictionary;

- (id)initWithImages:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithArray:(id)a0;
- (id)generateImageDictionaryFromArray:(id)a0;
- (id)stringPaddedForBase64:(id)a0;

@end
