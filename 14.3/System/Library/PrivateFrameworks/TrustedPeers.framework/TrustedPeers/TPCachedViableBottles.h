@class NSArray;

@interface TPCachedViableBottles : NSObject

@property (readonly, retain) NSArray *viableBottles;
@property (readonly, retain) NSArray *partialBottles;

- (void).cxx_destruct;
- (id)initWithViableBottles:(id)a0 partialBottles:(id)a1;

@end
