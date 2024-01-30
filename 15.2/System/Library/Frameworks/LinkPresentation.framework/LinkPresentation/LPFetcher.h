@class LPEvent;

@interface LPFetcher : NSObject

@property (readonly, nonatomic) unsigned int _loggingID;
@property (retain, nonatomic) LPEvent *_event;
@property (retain, nonatomic) id userData;

- (void).cxx_destruct;
- (id)init;
- (void)cancel;
- (void)fetchWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
