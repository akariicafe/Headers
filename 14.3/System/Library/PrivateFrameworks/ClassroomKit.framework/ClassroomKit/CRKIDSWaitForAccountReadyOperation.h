@class NSString;
@protocol CRKIDSListener, CRKIDSLocalPrimitives;

@interface CRKIDSWaitForAccountReadyOperation : CATOperation

@property (readonly, nonatomic) id<CRKIDSLocalPrimitives> IDSLocalPrimitives;
@property (readonly, copy, nonatomic) NSString *sourceAppleID;
@property (retain, nonatomic) id<CRKIDSListener> accountAdditionListener;
@property (retain, nonatomic) id<CRKIDSListener> accountActiveListener;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)accountDidBecomeKnownToService:(id)a0;
- (void)accountDidBecomeActive:(id)a0;
- (id)initWithIDSLocalPrimitives:(id)a0 sourceAppleID:(id)a1;

@end
