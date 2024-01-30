@class NSString, NSMutableDictionary, NSXPCConnection;
@protocol PKPrinterBrowserDelegate;

@interface PKPrinterBrowser : NSObject <PKBrowserClientProtocol> {
    unsigned char _originalCellFlag;
    unsigned char _originalWifiFlag;
    BOOL _delegateRespondsToProximityUpdate;
}

@property (retain, nonatomic) NSXPCConnection *pkBrowseConnection;
@property (retain, nonatomic) NSMutableDictionary *printers;
@property (retain, nonatomic) NSMutableDictionary *btDevices;
@property (nonatomic) id<PKPrinterBrowserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)browserWithDelegate:(id)a0;
+ (id)browserWithDelegate:(id)a0 infoDictionary:(id)a1;

- (void)dealloc;
- (void)btlePrinterFound:(id)a0;
- (void)btleRssiUpdated:(id)a0 rssi:(id)a1;
- (id)initWithDelegate:(id)a0 infoDictionary:(id)a1;
- (void)printerAdded:(id)a0 more:(BOOL)a1;
- (void)printerRemoved:(id)a0 more:(BOOL)a1;

@end
