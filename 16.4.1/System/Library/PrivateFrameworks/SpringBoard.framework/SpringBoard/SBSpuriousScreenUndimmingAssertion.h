@class NSString;

@interface SBSpuriousScreenUndimmingAssertion : NSObject {
    NSString *_identifier;
}

+ (id)debugDescription;
+ (BOOL)isAnyActive;
+ (void)_accessListWithBlock:(id /* block */)a0;

- (id)initWithIdentifier:(id)a0;
- (void)dealloc;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;

@end
