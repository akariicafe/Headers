@protocol BLSHAlwaysFillFlipbookProvider;

@interface BLSHAlwaysFillFlipbookAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHAlwaysFillFlipbookProvider> _provider;
}

+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)a0 provider:(id)a1;
+ (Class)attributeBaseClass;

- (id)initForService:(id)a0 provider:(id)a1;
- (void)activateWithFirstEntry:(id)a0;
- (void)deactivateWithFinalEntry:(id)a0;
- (void).cxx_destruct;

@end
