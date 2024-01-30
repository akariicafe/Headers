@class NSSet;

@interface EMFocus : NSObject

@property (readonly, copy, nonatomic) NSSet *focusedAccountIdentifiers;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFocusedAccountIdentifiers:(id)a0;
- (BOOL)isFocusedIdentifier:(id)a0;

@end
