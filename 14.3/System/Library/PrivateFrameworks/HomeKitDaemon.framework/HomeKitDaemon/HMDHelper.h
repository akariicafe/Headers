@protocol HMDHelperExternalProtocol;

@interface HMDHelper : NSObject

@property (retain, nonatomic) id<HMDHelperExternalProtocol> externalProtocol;

+ (id)sharedHelper;
+ (void)setSharedHelper:(id)a0;

- (void).cxx_destruct;
- (id)initWithExternalProtocol:(id)a0;
- (id)hashedRouteIDForIdentifier:(id)a0;

@end
