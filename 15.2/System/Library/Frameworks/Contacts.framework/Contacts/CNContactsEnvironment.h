@class CNiOSABPredicateRunner, NSArray, CNiOSAddressBook, NSURL;
@protocol CNContactsLoggerProvider, CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol, CNSchedulerProvider;

@interface CNContactsEnvironment : NSObject <NSCopying> {
    CNiOSAddressBook *_addressBook;
}

@property (retain, nonatomic) NSArray *delegateInfos;
@property (retain, nonatomic) CNiOSABPredicateRunner *abPredicateRunner;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider;
@property (readonly, nonatomic) id<CNContactsLoggerProvider> loggerProvider;
@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (copy, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) id<SGSuggestionsServiceContactsProtocol> suggestionsService;
@property (retain, nonatomic) id<CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings;
@property (readonly, nonatomic) BOOL useInMemoryStores;

+ (id)unitTestingEnvironmentWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
+ (BOOL)supportsSecureCoding;
+ (id)unitTestingEnvironment;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1 loggerProvider:(id)a2;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0;
+ (id)unitTestingEnvironmentWithDataLocationName:(id)a0 schedulerProvider:(id)a1;
+ (id)inMemoryURL;
+ (id)baseURLWithDataLocationName:(id)a0;
+ (id)currentEnvironment;

- (void)encodeWithCoder:(id)a0;
- (id)copyWithDelegateInfos:(id)a0;
- (void)makeCurrentEnvironment;
- (id)initWithSchedulerProvider:(id)a0 loggerProvider:(id)a1;
- (void).cxx_destruct;
- (void)setAddressBook:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
