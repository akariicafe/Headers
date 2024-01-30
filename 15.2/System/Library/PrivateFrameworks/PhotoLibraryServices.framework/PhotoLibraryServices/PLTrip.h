@class NSArray;

@interface PLTrip : NSObject

@property (readonly) unsigned long long type;
@property (readonly) NSArray *items;

- (id)initWithItems:(id)a0 type:(unsigned long long)a1;
- (id)description;
- (void).cxx_destruct;
- (double)duration;
- (id)typeDescription;

@end
