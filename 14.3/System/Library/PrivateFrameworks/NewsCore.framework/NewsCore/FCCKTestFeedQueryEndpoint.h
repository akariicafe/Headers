@class NSString;

@interface FCCKTestFeedQueryEndpoint : NSObject <FCCKTestQueryEndpoint>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleQueryOperation:(id)a0 withRecords:(id)a1 droppedFeeds:(id)a2;

@end
