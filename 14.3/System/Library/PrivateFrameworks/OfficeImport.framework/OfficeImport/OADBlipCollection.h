@class NSMutableArray;

@interface OADBlipCollection : NSObject

@property (retain, nonatomic) NSMutableArray *blips;

- (id)init;
- (void).cxx_destruct;
- (id)blipAtIndex:(int)a0;
- (unsigned int)addBlip:(id)a0;
- (unsigned int)blipCount;

@end
