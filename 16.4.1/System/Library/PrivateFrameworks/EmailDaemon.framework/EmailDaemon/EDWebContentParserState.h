@class NSURL, EFPromise;

@interface EDWebContentParserState : NSObject

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) EFPromise *dataDetectionPromise;
@property (retain, nonatomic) EFPromise *remoteContentPromise;
@property (retain, nonatomic) EFPromise *richLinkPromise;

- (void).cxx_destruct;

@end
