@class CRKClassSessionBeaconBrowser, NSSet, NSString, NSMutableDictionary, CATNetworkReachability, NSMutableArray;
@protocol CRKClassSessionBrowserDelegate, CRKInvitationSessionBrowserDelegate;

@interface CRKClassSessionBrowser : NSObject <CRKSessionDelegate, CRKClassSessionBeaconBrowserDelegate, CATNetworkReachabilityDelegate> {
    NSMutableDictionary *mClassSessionsByIdentifier;
    NSMutableArray *mInRangeClassSessions;
    NSMutableDictionary *mInvitationSessionsByEndpoint;
    CRKClassSessionBeaconBrowser *mBeaconBrowser;
    CATNetworkReachability *mNetworkReachability;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountBySessionIdentifier;
    NSMutableDictionary *mConnectWithoutBeaconAssertionCountByInviteSessionEndpoint;
}

@property (weak, nonatomic) id<CRKClassSessionBrowserDelegate> delegate;
@property (weak, nonatomic) id<CRKInvitationSessionBrowserDelegate> invitationSessionDelegate;
@property (copy, nonatomic) NSSet *organizationUUIDs;
@property (copy, nonatomic) NSSet *enrolledControlGroupIdentifiers;
@property (nonatomic) BOOL allowInvitationSessions;
@property (nonatomic) BOOL allowUnenrolledSessions;
@property (readonly, nonatomic, getter=isBrowsing) BOOL browsing;
@property (readonly, copy, nonatomic) NSSet *inRangeClassSessionIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stopBrowsing;
- (void)sessionDidDisconnect:(id)a0;
- (void)startBrowsing;
- (void)sessionDidInvalidate:(id)a0;
- (void)reachabilityDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)delegateDidFailWithError:(id)a0;
- (id)clientIdentityForSession:(id)a0;
- (id)trustedAnchorCertificatesForSession:(id)a0;
- (void)session:(id)a0 willLoseBeaconAfterTimeInterval:(double)a1;
- (void)sessionDidLoseBeacon:(id)a0;
- (void)sessionDidBecomeConnectable:(id)a0;
- (void)sessionDidBecomeNotConnectable:(id)a0;
- (void)session:(id)a0 didConnectWithTransport:(id)a1;
- (void)beaconBrowser:(id)a0 didFindBeaconForClassSession:(id)a1 flags:(unsigned short)a2;
- (void)beaconBrowser:(id)a0 didFindBeaconForInvitationSessionWithEndpoint:(id)a1;
- (void)beaconBrowser:(id)a0 didFailWithError:(id)a1;
- (void)session:(id)a0 encounteredUntrustedConnection:(id /* block */)a1;
- (void)updateConnectedSessions;
- (void)updateRequiresBeaconFlagForSession:(id)a0;
- (id)delegateNeedsClientIdentityForGroup:(id)a0;
- (id)delegateNeedsClientIdentityForInvitationSessionWithEndpoint:(id)a0;
- (id)delegateNeedsTrustedAnchorCertificatesForGroup:(id)a0;
- (void)delegateClassSessionDidBecomeConnectable:(id)a0;
- (void)delegateClassSessionDidBecomeNotConnectable:(id)a0;
- (void)delegateDidFindClassSession:(id)a0 transport:(id)a1;
- (void)delegateDidFindInvitationSession:(id)a0 transport:(id)a1;
- (void)delegateLostConnectionToClassSession:(id)a0;
- (void)delegateLostConnectionToInvitationSession:(id)a0;
- (void)delegateDidRemoveClassSession:(id)a0;
- (void)removeInRangeClassSession:(id)a0;
- (void)delegateDidRemoveInvitationSession:(id)a0;
- (void)handleUntrustedInvitationSession:(id)a0 decisionHandler:(id /* block */)a1;
- (void)handleUntrustedClassSession:(id)a0 decisionHandler:(id /* block */)a1;
- (void)addInRangeClassSession:(id)a0;
- (void)delegateInRangeClassSessionsDidChange;
- (void)connectToClassSessionWithIdentifier:(id)a0;
- (void)classSessionInvalidated:(id)a0;
- (void)classSessionRejected:(id)a0;
- (void)lostConnectionToClassSession:(id)a0;
- (BOOL)hasConnectionToClassWithIdentifier:(id)a0;
- (void)invitationSessionWithEndpointInvalidated:(id)a0;
- (void)lostConnectionToInvitationSessionWithEndpoint:(id)a0;
- (void)acquireConnectWithoutBeaconAssertionForSessionIdentifier:(id)a0;
- (void)releaseConnectWithoutBeaconAssertionForSessionIdentifier:(id)a0;
- (void)acquireConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)a0;
- (void)releaseConnectWithoutBeaconAssertionForInvitationSessionWithEndpoint:(id)a0;
- (id)stateDictionariesByClassSessionIdentifierString;
- (id)browserStateDictionary;

@end
