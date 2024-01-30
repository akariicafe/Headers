@class NSString;

@interface DNDEventBehaviorResolutionService : NSObject {
    NSString *_clientIdentifier;
}

+ (void)initialize;
+ (id)serviceForClientIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)_initWithClientIdentifier:(id)a0;
- (id)resolveBehaviorForEventDetails:(id)a0 error:(id *)a1;

@end
