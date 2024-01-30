@class NSString;
@protocol SXBookmarkManager;

@interface SXBookmarkActionActivityProvider : NSObject <SXActionActivityProvider> {
    id<SXBookmarkManager> _bookmarkManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)activityGroupForAction:(id)a0;

@end
