@class NSString;

@interface WBSCyclerDeleteBookmarkOperation : NSObject <WBSCyclerBookmarkOperation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeWithContext:(id)a0 completionHandler:(id /* block */)a1;

@end
