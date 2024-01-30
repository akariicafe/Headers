@class NSSet;

@interface APOdmlAllowList : APOdmlSingleton

@property (retain, nonatomic) NSSet *allowList;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (BOOL)isAllowed:(id)a0;
- (void)reinitializeAllowList;

@end
