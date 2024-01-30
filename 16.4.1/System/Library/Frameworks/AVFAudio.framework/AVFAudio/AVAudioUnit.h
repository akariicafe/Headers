@class AUAudioUnit, NSString;

@interface AVAudioUnit : AVAudioNode

@property (readonly, nonatomic) struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } audioComponentDescription;
@property (readonly, nonatomic) struct OpaqueAudioComponentInstance { } *audioUnit;
@property (readonly, nonatomic) AUAudioUnit *AUAudioUnit;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *manufacturerName;
@property (readonly, nonatomic) unsigned long long version;

+ (void)instantiateWithComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0 options:(unsigned int)a1 completionHandler:(id /* block */)a2;

- (BOOL)loadAudioUnitPresetAtURL:(id)a0 error:(id *)a1;
- (id)initWithAudioComponentDescription:(struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; })a0;
- (BOOL)setValue:(float)a0 forParam:(unsigned int)a1;
- (float)valueForParam:(unsigned int)a0;

@end
