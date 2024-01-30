@class NSSet, NSOrderedSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {
    BOOL _active;
    NSOrderedSet *_context;
}

@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;

- (id)description;
- (void).cxx_destruct;

@end
