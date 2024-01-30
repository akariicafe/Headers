@class NSArray, NSDictionary, NSURL, NSData;

@interface BCMessageData : NSObject {
    NSURL *_url;
    NSData *_data;
    NSDictionary *_jsonDictionary;
    NSDictionary *_replyMessageDictionary;
    NSDictionary *_receivedMessageDictionary;
}

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSDictionary *jsonDictionary;
@property (readonly, nonatomic) NSDictionary *replyMessageDictionary;
@property (readonly, nonatomic) NSDictionary *receivedMessageDictionary;
@property (readonly, nonatomic) NSDictionary *combinedDictionary;
@property (readonly, nonatomic) NSArray *imagesArray;

- (void).cxx_destruct;
- (id)initWithUrl:(id)a0 data:(id)a1;

@end
