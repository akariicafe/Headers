@class NSURL;
@protocol NFNdefMessage;

@interface BCSNFCReaderURLRecord : NSObject

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<NFNdefMessage> message;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 message:(id)a1;

@end
