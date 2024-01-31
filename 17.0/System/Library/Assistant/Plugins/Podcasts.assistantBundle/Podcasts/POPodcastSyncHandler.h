@class NSString, NSMutableDictionary;

@interface POPodcastSyncHandler : NSObject <AFSyncHandler>

@property (retain, nonatomic) NSMutableDictionary *anchorToRevision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)validity;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 count:(long long)a2 forKey:(id)a3 beginInfo:(id)a4;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;

@end
