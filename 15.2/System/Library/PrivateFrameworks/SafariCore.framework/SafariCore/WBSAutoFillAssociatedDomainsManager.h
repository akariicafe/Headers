@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface WBSAutoFillAssociatedDomainsManager : NSObject {
    NSMutableDictionary *_domainToDomainsWithAssociatedCredentials;
    NSMutableDictionary *_domainsToDomainsToConsiderIdentical;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (copy, nonatomic) NSArray *domainsWithAssociatedCredentials;
@property (copy, nonatomic) NSArray *domainsToConsiderIdentical;

- (void).cxx_destruct;
- (id)init;
- (id)domainsWithAssociatedCredentialsForDomain:(id)a0;
- (id)initWithDomainsWithAssociatedCredentials:(id)a0 domainsToConsiderIdentical:(id)a1;
- (void)_updateDomainToDomainsWithAssociatedCredentials;
- (void)_updateDomainToDomainsToConsiderIdentical;
- (id)initWithDomainsWithAssociatedCredentials:(id)a0;
- (id)domainsToConsiderIdenticalToDomain:(id)a0;

@end
