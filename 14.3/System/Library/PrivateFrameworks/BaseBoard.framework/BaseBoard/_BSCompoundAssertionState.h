@class NSSet, NSOrderedSet;

@interface _BSCompoundAssertionState : NSObject <BSCompoundAssertionState> {
    BOOL _active;
    NSOrderedSet *_context;
}

@property (readonly, getter=isActive) BOOL active;
@property (readonly) NSSet *context;
@property (readonly) NSOrderedSet *orderedContext;

- (void).cxx_destruct;
- (id)description;

@end
