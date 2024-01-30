@class NSURL, NSString;

@interface FTServerBag : NSObject {
    long long _type;
}

@property (readonly) NSURL *bagURL;
@property (readonly) NSString *apsEnvironmentName;
@property (readonly) BOOL allowSelfSignedCertificates;
@property (readonly) BOOL allowUnsignedBags;
@property (readonly) BOOL isLoaded;
@property (readonly) BOOL isLoading;
@property (readonly) BOOL isInDebilitatedMode;
@property (readonly) BOOL isServerAvailable;

+ (id)sharedInstance;
+ (id)sharedInstanceForBagType:(long long)a0;
+ (id)_sharedInstanceForType:(long long)a0;
+ (id)_sharedInstance;

- (id)objectForKey:(id)a0;
- (id)_cachedBag;
- (id)urlWithKey:(id)a0;
- (id)_bag;
- (void)dealloc;
- (id)initWithBagType:(long long)a0;
- (void)forceBagLoad;
- (void)startBagLoad;

@end
