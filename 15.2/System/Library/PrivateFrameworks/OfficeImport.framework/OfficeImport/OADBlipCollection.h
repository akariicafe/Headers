@class NSMutableArray;

@interface OADBlipCollection : NSObject

@property (retain, nonatomic) NSMutableArray *blips;

- (void).cxx_destruct;
- (id)init;
- (unsigned int)addBlip:(id)a0;
- (id)blipAtIndex:(int)a0;
- (unsigned int)blipCount;

@end
