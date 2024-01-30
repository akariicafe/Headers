@class NSString;
@protocol SXBookmark;

@interface SXBookmarkAction : NSObject <SXAction>

@property (readonly, nonatomic) id<SXBookmark> bookmark;
@property (readonly, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithBookmark:(id)a0;
- (void).cxx_destruct;

@end
