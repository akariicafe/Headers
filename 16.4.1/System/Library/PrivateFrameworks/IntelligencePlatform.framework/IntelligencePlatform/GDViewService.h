@class GDViewAccessRequester, GDViewDatabaseInstances;

@interface GDViewService : NSObject {
    GDViewDatabaseInstances *_databases;
}

@property (readonly, nonatomic) GDViewAccessRequester *accessRequester;

+ (id)defaultService;

- (id)init;
- (void).cxx_destruct;
- (id)visualIdentifierViewWithError:(id *)a0;
- (id)donationViewWithError:(id *)a0;
- (id)featureViewWithError:(id *)a0;
- (id)initForTestingWithAccessRequester:(id)a0;
- (id)pageRankViewWithError:(id *)a0;
- (id)personViewWithError:(id *)a0;

@end
