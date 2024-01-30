@class NSArray;

@interface _UIFocusLinearMovementSequence : NSObject

@property (readonly, copy, nonatomic) NSArray *items;
@property (readonly, nonatomic, getter=isLooping) BOOL looping;
@property (readonly, nonatomic, getter=restrictsEnteringSequence) BOOL restrictEnteringSequence;

+ (id)sequenceWithItems:(id)a0 loops:(BOOL)a1;
+ (id)sequenceWithItems:(id)a0 loops:(BOOL)a1 restrictEnteringSequence:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 loops:(BOOL)a1;
- (id)initWithItems:(id)a0 loops:(BOOL)a1 restrictEnteringSequence:(BOOL)a2;

@end
