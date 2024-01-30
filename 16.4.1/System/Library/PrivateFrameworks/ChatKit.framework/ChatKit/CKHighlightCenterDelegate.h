@class NSString, SWHighlightCenter;

@interface CKHighlightCenterDelegate : NSObject <SWHighlightCenterDelegate>

@property (readonly, nonatomic) SWHighlightCenter *highlightCenter;
@property (copy, nonatomic) id /* block */ performOnHighlightsDidChange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldAddCollaboration:(id)a0 toFaceTimeConversation:(id)a1 forIMChat:(id)a2;

- (void)highlightCenterHighlightsDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithComposition:(id)a0 faceTimeConversation:(id)a1 imChat:(id)a2 chatController:(id)a3 backgroundTaskID:(unsigned long long)a4;

@end
