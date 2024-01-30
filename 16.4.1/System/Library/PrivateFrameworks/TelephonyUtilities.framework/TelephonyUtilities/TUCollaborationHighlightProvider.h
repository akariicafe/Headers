@class NSString, NSMutableDictionary, SWHighlightCenter;
@protocol TUCollaborationProviderDelegate;

@interface TUCollaborationHighlightProvider : NSObject <SWHighlightCenterDelegate, TUCollaborationProvider>

@property (readonly, nonatomic) SWHighlightCenter *highlightCenter;
@property (readonly, nonatomic) NSMutableDictionary *collaborationIdentifierToPendingCollaborations;
@property (readonly, nonatomic) NSMutableDictionary *collaborationIdentifierToBundleIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<TUCollaborationProviderDelegate> delegate;

- (id)collaborationHighlightForIdentifier:(id)a0;
- (id)addTemporaryCollaboration:(id)a0;
- (void)highlightCenterHighlightsDidChange:(id)a0;
- (id)init;
- (id)ckBundleIDForCollaborationIdentifier:(id)a0;
- (void).cxx_destruct;

@end
