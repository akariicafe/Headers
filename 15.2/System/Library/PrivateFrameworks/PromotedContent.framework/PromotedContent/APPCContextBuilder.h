@class NSUUID, NSArray, NSString, APPCContext;

@interface APPCContextBuilder : NSObject <APPCPromotableBaseContext> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ next;
    void /* unknown type, empty encoding */ requestedAd;
    void /* unknown type, empty encoding */ resourceLock;
    void /* unknown type, empty encoding */ adjacentInternal;
}

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) void /* unknown type, empty encoding */ maxSize;
@property (nonatomic, retain) void /* unknown type, empty encoding */ current;
@property (nonatomic, copy) NSArray *next;
@property (nonatomic, readonly) NSArray *adjacent;
@property (nonatomic, copy) NSString *requestedAd;
@property (nonatomic, retain) void /* unknown type, empty encoding */ newsContext;
@property (nonatomic, readonly) APPCContext *context;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 current:(id)a1 next:(id)a2 newsContext:(id)a3 requestedAd:(id)a4;
- (id)initWithMaxSize:(struct CGSize { double x0; double x1; })a0 current:(id)a1 newsContext:(id)a2 requestedAd:(id)a3;
- (BOOL)addAdjacentWithAdjacent:(id)a0 error:(id *)a1;
- (void)removeAdjacentWithAdjacent:(id)a0;

@end
