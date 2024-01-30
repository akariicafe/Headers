@interface AVExtendedNoteOnEvent : AVMusicEvent

@property (readonly) struct ExtendedNoteOnEvent { unsigned int x0; unsigned int x1; float x2; struct MusicDeviceNoteParams { unsigned int x0; float x1; float x2; struct NoteParamsControlValue { unsigned int x0; float x1; } x3[1]; } x3; } *event;
@property float midiNote;
@property float velocity;
@property unsigned int instrumentID;
@property unsigned int groupID;
@property double duration;

- (void)dealloc;
- (id)initWithMIDINote:(float)a0 velocity:(float)a1 groupID:(unsigned int)a2 duration:(double)a3;
- (id)initWithMIDINote:(float)a0 velocity:(float)a1 instrumentID:(unsigned int)a2 groupID:(unsigned int)a3 duration:(double)a4;
- (id)initWithNoteOnEvent:(struct ExtendedNoteOnEvent { unsigned int x0; unsigned int x1; float x2; struct MusicDeviceNoteParams { unsigned int x0; float x1; float x2; struct NoteParamsControlValue { unsigned int x0; float x1; } x3[1]; } x3; } *)a0;

@end
