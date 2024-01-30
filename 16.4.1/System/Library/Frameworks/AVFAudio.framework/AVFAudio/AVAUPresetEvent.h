@class NSDictionary;

@interface AVAUPresetEvent : AVMusicEvent {
    struct AUPresetEvent { unsigned int scope; unsigned int element; void *preset; } _event;
}

@property (readonly) struct AUPresetEvent { unsigned int x0; unsigned int x1; void *x2; } *event;
@property unsigned int scope;
@property unsigned int element;
@property (readonly, copy) NSDictionary *presetDictionary;

- (void)dealloc;
- (id)initWithAUPresetEvent:(struct AUPresetEvent { unsigned int x0; unsigned int x1; void *x2; } *)a0;
- (id)initWithScope:(unsigned int)a0 element:(unsigned int)a1 dictionary:(id)a2;

@end
