@class NSSet, NSMutableSet;

@interface UARPSupportedAccessoryManager : NSObject {
    NSMutableSet *_setOfAccessories;
}

@property (readonly) NSSet *setOfAccessories;

+ (id)defaultManager;

- (void)addSupportedAccessory:(id)a0;
- (void)addSupportedAccessories:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSupportedAccessoryByDictionary:(id)a0;

@end
