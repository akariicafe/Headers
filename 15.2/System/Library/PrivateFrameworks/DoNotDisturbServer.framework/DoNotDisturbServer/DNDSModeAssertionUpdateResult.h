@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSArray *assertions;
@property (readonly, copy, nonatomic) NSArray *invalidations;

+ (id)emptyResult;

- (id)description;
- (void).cxx_destruct;
- (id)resultCombiningWithResult:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAssertions:(id)a0 invalidations:(id)a1;

@end
