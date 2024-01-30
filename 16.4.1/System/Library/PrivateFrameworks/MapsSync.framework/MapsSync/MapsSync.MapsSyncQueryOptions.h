@class NSArray;

@interface MapsSync.MapsSyncQueryOptions : NSObject {
    void /* unknown type, empty encoding */ sortDescriptors;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ predicate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ range;
@property (nonatomic, copy) NSArray *sortDescriptors;
@property (nonatomic) void /* unknown type, empty encoding */ notifyOnLoad;

+ (id)restrictOptionsWithOptions:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;

- (id)initWithPredicate:(id)a0 sortDescriptors:(id)a1 range:(id)a2;
- (id)init;
- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;

@end
