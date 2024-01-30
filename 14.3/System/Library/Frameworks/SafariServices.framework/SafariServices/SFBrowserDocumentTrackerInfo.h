@class NSSet, NSDate;
@protocol _SFBrowserDocument;

@interface SFBrowserDocumentTrackerInfo : NSObject {
    BOOL _cachedTrackingPreventionEnabled;
    NSDate *_lastNavigationCommitDate;
}

@property (class, readonly, nonatomic) BOOL trackingPreventionEnabled;

@property (readonly, weak, nonatomic) id<_SFBrowserDocument> document;
@property (readonly, nonatomic) NSSet *allowedKnownTrackingThirdParties;
@property (readonly, nonatomic) NSSet *preventedKnownTrackingThirdParties;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDocument:(id)a0;
- (void)updateKnownTrackingThirdPartiesWithCompletionHandler:(id /* block */)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_resetKnownTrackingThirdParties;
- (void)_flushKnownTrackingThirdParties;
- (void)_updateKnownTrackingThirdPartiesWithCompletionHandler:(id /* block */)a0;
- (void)documentDidCommitNavigation;

@end
