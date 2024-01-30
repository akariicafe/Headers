@class NSString, NSError, NSDate, AMSProcessInfo;

@interface AMSBagFailingDataSource : NSObject <AMSBagDataSourceProtocol>

@property (nonatomic) double delay;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) NSString *bagLoadingPartialIdentifier;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (copy, nonatomic) id /* block */ dataSourceChangedHandler;
@property (copy, nonatomic) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)defaultValueForKey:(id)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (void)setDefaultValue:(id)a0 forKey:(id)a1;
- (void)loadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithProfile:(id)a0 profileVersion:(id)a1 error:(id)a2 delay:(double)a3;

@end
