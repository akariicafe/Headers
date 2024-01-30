@class _MPCQueueControllerBehaviorMusic2, NSEnumerator, MPSectionedIdentifierListPosition;

@interface _MPCQueueControllerEnumerator2 : NSEnumerator {
    long long _nextEnumerator;
    BOOL _isEnumeratingFromRepeatAllBase;
    BOOL _hasEmittedItemFromRepeatAllBase;
}

@property (readonly, weak, nonatomic) _MPCQueueControllerBehaviorMusic2 *musicBehavior;
@property (readonly, nonatomic) long long mode;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSEnumerator *enumerator;
@property (readonly, nonatomic) MPSectionedIdentifierListPosition *startPosition;
@property (readonly, nonatomic) MPSectionedIdentifierListPosition *endPosition;
@property (copy, nonatomic) id /* block */ repeatBoundaryBlock;

+ (id)enumeratorWithMusicBehavior:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 startPosition:(id)a3 endPosition:(id)a4;

- (id)nextObject;
- (id)_init;
- (void).cxx_destruct;
- (void)_buildEnumerator;

@end
