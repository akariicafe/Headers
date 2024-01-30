@class NSURL, EFPromise;

@interface ECRemoteContentParserState : NSObject

@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) EFPromise *remoteContentPromise;

- (void).cxx_destruct;

@end
