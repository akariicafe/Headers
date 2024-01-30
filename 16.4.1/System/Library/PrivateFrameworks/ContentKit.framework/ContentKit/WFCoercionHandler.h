@class NSString;

@interface WFCoercionHandler : NSObject

@property (readonly, nonatomic) long long concurrencyMode;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly, copy, nonatomic) id /* block */ asynchronousBlock;
@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, copy, nonatomic) id /* block */ availabilityCheck;

+ (id)asynchronousBlock:(id /* block */)a0;
+ (id)asynchronousBlock:(id /* block */)a0 availabilityCheck:(id /* block */)a1;
+ (id)block:(id /* block */)a0;
+ (id)block:(id /* block */)a0 availabilityCheck:(id /* block */)a1;
+ (id)keyPath:(id)a0;
+ (id)keyPath:(id)a0 availabilityCheck:(id /* block */)a1;
+ (id)keyPath:(id)a0 unavailableIfNilOrEmpty:(BOOL)a1;

- (void).cxx_destruct;
- (BOOL)coercionIsAvailableForItem:(id)a0;
- (BOOL)hasAvailabilityCheck;
- (id)initWithBlock:(id /* block */)a0 asynchronousBlock:(id /* block */)a1 keyPath:(id)a2 availabilityCheck:(id /* block */)a3;
- (void)performAsynchronousCoercionWithContentItem:(id)a0 forType:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)performSynchronousCoercionWithContentItem:(id)a0 forType:(id)a1 options:(id)a2 error:(id *)a3;

@end
