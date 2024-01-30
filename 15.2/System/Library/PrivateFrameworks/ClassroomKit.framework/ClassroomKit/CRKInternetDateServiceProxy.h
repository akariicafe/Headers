@class NSString, CRKValidXPCConnectionProvider;

@interface CRKInternetDateServiceProxy : NSObject <CRKInternetDateFetching>

@property (readonly, nonatomic) CRKValidXPCConnectionProvider *connectionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
