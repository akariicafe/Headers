@class NSMutableDictionary;

@interface _UIHIDPathCollection : NSObject {
    NSMutableDictionary *_pathsById;
    struct CGPoint { double x; double y; } _position;
    unsigned int _buttonMask;
    unsigned long long _machTimestamp;
    unsigned char _locus;
    struct __IOHIDEvent { } *_hidEvent;
}

@property (nonatomic) unsigned long long digitizerSenderID;
@property (readonly, nonatomic) unsigned long long pathCount;
@property (nonatomic) unsigned int fallbackContextId;

- (void)addPath:(id)a0;
- (void)updateWithHIDEvent:(struct __IOHIDEvent { } *)a0;
- (id)pathWithId:(id)a0;
- (unsigned int)_collectionMask;
- (BOOL)hasPathWithId:(id)a0;
- (struct __IOHIDEvent { } *)_createCollectionEventForEvent:(struct __IOHIDEvent { } *)a0;
- (id)hidEventFromCurrentState;
- (void).cxx_destruct;
- (void)removePath:(id)a0;
- (id)init;
- (void)dealloc;
- (id)pathsInPhase:(long long)a0;
- (id)pathsTouching;

@end
