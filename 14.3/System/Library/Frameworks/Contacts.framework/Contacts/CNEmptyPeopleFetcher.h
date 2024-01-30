@class NSString;

@interface CNEmptyPeopleFetcher : NSObject <CNEncodedFetchCursor>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchNextBatchWithReply:(id /* block */)a0;

@end
