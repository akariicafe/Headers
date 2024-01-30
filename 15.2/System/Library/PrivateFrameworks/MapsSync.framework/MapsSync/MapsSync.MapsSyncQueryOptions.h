@class NSArray;

@interface MapsSync.MapsSyncQueryOptions : NSObject {
    void /* unknown type, empty encoding */ sortDescriptors;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ predicate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ range;
@property (nonatomic, copy) NSArray *sortDescriptors;

+ (id)restrictOptionsWithOptions:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;

- (id)initWithOptions:(id)a0;
- (id)initWithPredicate:(id)a0 sortDescriptors:(id)a1 range:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
