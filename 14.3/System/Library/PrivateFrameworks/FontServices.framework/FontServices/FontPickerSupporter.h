@class NSXPCListenerEndpoint, NSMutableSet, NSXPCConnection;

@interface FontPickerSupporter : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCListenerEndpoint *clientEndpoint;
@property (retain, nonatomic) NSMutableSet *activatedFontFilePaths;
@property (nonatomic) BOOL clientHasFontAccessEntitlement;

- (void)setup;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0;
- (void)checkin:(id /* block */)a0;
- (void)done;
- (void)synchronize:(id)a0 deactivated:(id)a1 includingFontAssets:(BOOL)a2;
- (BOOL)clientHasFontAccessEntitlement:(struct { unsigned int x0[8]; })a0;

@end
