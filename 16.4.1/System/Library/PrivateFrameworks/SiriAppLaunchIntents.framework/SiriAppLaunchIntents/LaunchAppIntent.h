@class Application, NSArray, InAppSearchCriteria, NSNumber;

@interface LaunchAppIntent : INIntent

@property (nonatomic, retain) Application *requestedApplication;
@property (nonatomic, retain) Application *application;
@property (nonatomic, retain) InAppSearchCriteria *inAppSearch;
@property (nonatomic, copy) NSArray *suggestedApplications;
@property (nonatomic, retain) NSNumber *isRemoteExecution;
@property (nonatomic, retain) NSNumber *smartSelectApps;
@property (nonatomic, retain) NSNumber *isInCarPlay;
@property (nonatomic, retain) NSNumber *isNLv4Parse;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDomain:(id)a0 verb:(id)a1 parametersByName:(id)a2;
- (id)initWithIdentifier:(id)a0 backingStore:(id)a1;

@end
