@class NSArray;

@interface PLTrip : NSObject

@property (readonly) unsigned long long type;
@property (readonly) NSArray *items;

- (id)typeDescription;
- (void).cxx_destruct;
- (id)description;
- (double)duration;
- (id)initWithItems:(id)a0 type:(unsigned long long)a1;

@end
