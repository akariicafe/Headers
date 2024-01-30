@class NSSet;

@interface APOdmlAllowList : APOdmlSingleton

@property (retain, nonatomic) NSSet *allowList;

+ (id)sharedInstance;

- (unsigned long long)count;
- (void)reinitializeAllowList;
- (id)init;
- (BOOL)isAllowed:(id)a0;
- (void).cxx_destruct;

@end
