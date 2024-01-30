@class NSXPCListenerEndpoint, NSMutableSet, NSXPCConnection;

@interface FontPickerSupporter : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSXPCListenerEndpoint *clientEndpoint;
@property (retain, nonatomic) NSMutableSet *activatedFontFilePaths;
@property (nonatomic) BOOL clientHasFontAccessEntitlement;

- (void)done;
- (void)setup;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (void)checkin:(id /* block */)a0;
- (void)synchronize:(id)a0 deactivated:(id)a1 includingFontAssets:(BOOL)a2;
- (BOOL)clientHasFontAccessEntitlement:(struct { unsigned int x0[8]; })a0;

@end
