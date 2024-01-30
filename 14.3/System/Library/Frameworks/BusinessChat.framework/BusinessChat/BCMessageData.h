@class NSArray, NSDictionary, NSURL, NSData;

@interface BCMessageData : NSObject

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSDictionary *jsonDictionary;
@property (retain, nonatomic) NSDictionary *replyMessageDictionary;
@property (retain, nonatomic) NSDictionary *receivedMessageDictionary;
@property (readonly, nonatomic) NSDictionary *combinedDictionary;
@property (readonly, nonatomic) NSArray *imagesArray;

- (void).cxx_destruct;
- (void)decodeData:(id)a0 dictionaryKey:(id)a1;
- (id)initWithUrl:(id)a0 data:(id)a1;

@end
