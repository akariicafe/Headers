@class NSNumber, NSArray;

@interface CBMutableService : CBService

@property (retain) NSNumber *ID;
@property (retain) NSArray *includedServices;
@property (retain) NSArray *characteristics;

- (id)description;
- (void).cxx_destruct;
- (void)handlePowerNotOn;
- (id)initWithDictionary:(id)a0;
- (id)initWithType:(id)a0 primary:(BOOL)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
