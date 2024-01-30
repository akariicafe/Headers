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
- (void)dealloc;
- (id)_bag;
- (id)_cachedBag;
- (void)forceBagLoad;
- (void)startBagLoad;
- (id)urlWithKey:(id)a0;
- (id)initWithBagType:(long long)a0;

@end
