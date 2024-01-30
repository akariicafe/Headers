@class DEMatchCriteria;

@interface DEFilter : NSObject

@property (retain, nonatomic) DEMatchCriteria *include;
@property (retain, nonatomic) DEMatchCriteria *exclude;

+ (void)filterToPb:(id)a0 filterPb:(void *)a1;
+ (id)filterFromPb:(const void *)a0;
+ (id)catUpdates:(id)a0;
+ (id)filterThroughPb:(id)a0;
+ (id)catUpdates;
+ (id)deprecatedCatSummary;

- (BOOL)allows:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)apply:(id /* block */)a0 to:(id)a1;
- (id)initWithInclude:(id)a0 exclude:(id)a1;

@end
