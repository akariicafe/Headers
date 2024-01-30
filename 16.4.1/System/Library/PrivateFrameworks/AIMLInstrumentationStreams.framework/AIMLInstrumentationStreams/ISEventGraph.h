@class NSSet, ISComponentGroup, NSDate;

@interface ISEventGraph : NSObject {
    void /* unknown type, empty encoding */ eventsInternal;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typeIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_innerTypeIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentIdentifierIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_typeAndCIDIndex;
}

@property (nonatomic, readonly) ISComponentGroup *ueiBridge;
@property (nonatomic, readonly) ISComponentGroup *orchBridge;
@property (nonatomic, readonly) ISComponentGroup *nlxBridge;
@property (nonatomic, readonly) ISComponentGroup *asrBridge;
@property (nonatomic, readonly) NSSet *componentIdentifiersBridge;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ timestamp;
@property (nonatomic, readonly) NSDate *date;

- (id)init;
- (void).cxx_destruct;
- (id)getComponentGroupBridgeWithType:(Class)a0;
- (id)getComponentGroupBridgesWithType:(Class)a0;
- (id)sieventWithInnerType:(Class)a0;
- (id)sievents;
- (id)sieventsWithComponentIdentifier:(id)a0;
- (id)sieventsWithComponentName:(int)a0;
- (id)sieventsWithInnerType:(Class)a0;
- (id)sieventsWithType:(Class)a0;

@end
