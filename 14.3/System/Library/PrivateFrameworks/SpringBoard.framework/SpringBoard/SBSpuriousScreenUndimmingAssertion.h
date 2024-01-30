@class NSString;

@interface SBSpuriousScreenUndimmingAssertion : NSObject {
    NSString *_identifier;
}

+ (id)debugDescription;
+ (void)_accessListWithBlock:(id /* block */)a0;
+ (BOOL)isAnyActive;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void)invalidate;

@end
