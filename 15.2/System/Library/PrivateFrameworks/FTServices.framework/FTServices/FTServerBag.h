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
+ (id)_sharedInstance;
+ (id)sharedInstanceForBagType:(long long)a0;
+ (id)_sharedInstanceForType:(long long)a0;

- (id)_cachedBag;
- (id)_bag;
- (id)initWithBagType:(long long)a0;
- (void)startBagLoad;
- (id)objectForKey:(id)a0;
- (void)forceBagLoad;
- (id)urlWithKey:(id)a0;
- (void)dealloc;

@end
