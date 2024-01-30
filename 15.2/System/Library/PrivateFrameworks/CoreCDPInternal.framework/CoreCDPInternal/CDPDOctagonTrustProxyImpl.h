@class NSString, CDPContext;

@interface CDPDOctagonTrustProxyImpl : NSObject <CDPDOctagonTrustProxy>

@property (retain, nonatomic) CDPContext *cdpContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
