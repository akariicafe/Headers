@class NSString, LAContext;

@interface ACFLocalAuthenticationContext : NSObject <ACFLocalAuthenticationContextProtocol>

@property (retain, nonatomic) LAContext *context;
@property (copy, nonatomic) NSString *localizedReason;
@property (copy, nonatomic) NSString *localizedFallbackTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
