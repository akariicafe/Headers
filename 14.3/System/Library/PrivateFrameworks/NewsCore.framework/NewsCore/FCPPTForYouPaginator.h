@class NSString;

@interface FCPPTForYouPaginator : NSObject <FCFeedPaginating>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)editionFollowingEdition:(id)a0;
- (id)editionAtDate:(id)a0;

@end
