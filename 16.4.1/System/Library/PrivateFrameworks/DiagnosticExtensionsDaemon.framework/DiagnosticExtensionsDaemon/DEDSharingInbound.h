@class DEDController, DEDSharingConnection, NSObject;
@protocol OS_os_log;

@interface DEDSharingInbound : NSObject

@property (weak) DEDController *delegate;
@property (weak) DEDSharingConnection *connection;
@property (retain) NSObject<OS_os_log> *log;

- (id)init;
- (void).cxx_destruct;
- (void)handleObject:(id)a0 forSFSession:(id)a1;
- (void)handleObject:(id)a0 forSFSession:(id)a1 forBugSession:(id)a2 callingDevice:(id)a3;
- (void)handleRequest:(id)a0 forSFSession:(id)a1 completion:(id /* block */)a2;
- (id)initWithController:(id)a0 sharingConnection:(id)a1;

@end
