@class NSString, NSArray, NSURL, GEOPDTransitConnection;

@interface _GEOTransitConnectionInfo : NSObject <GEOTransitConnectionInfo> {
    GEOPDTransitConnection *_connection;
    int _providerID;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) NSURL *urlToOpen;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) int providerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 providerID:(int)a1;

@end
