@class NSSet;

@interface APOdmlAllowList : APOdmlSingleton

@property (retain, nonatomic) NSSet *allowList;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)count;
- (BOOL)isAllowed:(id)a0;
- (void)reinitializeAllowList;

@end
