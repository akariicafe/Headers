@class NSUUID, NSString, BSServiceConnection;
@protocol SBSInCallPresentationClientToServerInterface;

@interface _SBInCallPresentationRequestServerTarget : NSObject <SBSInCallPresentationClientToServerInterface>

@property (class, readonly) _SBInCallPresentationRequestServerTarget *currentTarget;

@property (readonly, weak, nonatomic) BSServiceConnection *connection;
@property (weak, nonatomic) id<SBSInCallPresentationClientToServerInterface> proxyInterface;
@property (readonly, copy, nonatomic) NSUUID *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
