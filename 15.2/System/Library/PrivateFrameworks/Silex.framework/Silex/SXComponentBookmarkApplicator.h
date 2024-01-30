@class NSString;
@protocol SXScrollPositionRestoring;

@interface SXComponentBookmarkApplicator : NSObject <SXBookmarkApplicator>

@property (readonly, nonatomic) id<SXScrollPositionRestoring> scrollPositionRestoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)applyBookmark:(id)a0;
- (id)initWithScrollPositionRestoring:(id)a0;

@end
