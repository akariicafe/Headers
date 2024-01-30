@class NSXPCListener, NSMutableArray, NSString;

@interface DKDiagnosticService : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) Class principalClass;
@property (retain, nonatomic) NSMutableArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
