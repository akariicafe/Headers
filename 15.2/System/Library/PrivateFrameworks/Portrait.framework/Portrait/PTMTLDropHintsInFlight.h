@class NSMutableArray;

@interface PTMTLDropHintsInFlight : NSObject {
    NSMutableArray *_activeGroups;
}

+ (id)instance:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (int)clear:(id)a0;
- (void)setActiveResourceGroups:(id)a0;
- (void)_addResourceGroup:(id)a0 toCommandBuffer:(id)a1;
- (void)_dropResourceGroup:(id)a0 fromCommandBuffer:(id)a1;

@end
