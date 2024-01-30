@class NSMutableArray;

@interface PTMTLDropHintsInFlight : NSObject {
    NSMutableArray *_activeGroups;
}

+ (id)instance:(id)a0;
+ (void)setEnabled:(BOOL)a0 device:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_addResourceGroup:(id)a0 toCommandBuffer:(id)a1;
- (void)_dropResourceGroup:(id)a0 fromCommandBuffer:(id)a1;
- (int)checkForUnreleasedDrophints;
- (void)setActiveResourceGroups:(id)a0;

@end
