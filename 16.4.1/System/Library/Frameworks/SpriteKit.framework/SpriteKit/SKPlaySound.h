@class NSString, SKSoundSource;

@interface SKPlaySound : SKAction {
    NSString *_filePath;
    NSString *_fileName;
    struct SKCPlaySound { void /* function */ **x0; unsigned int x1; float x2; id /* block */ x3; id x4; BOOL x5; double x6; double x7; float x8; float x9; double x10; BOOL x11; BOOL x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; id x19; BOOL x20; BOOL x21; } *_mycaction;
    struct CGPoint { double x; double y; } _position;
    SKSoundSource *_soundSource;
}

+ (BOOL)supportsSecureCoding;
+ (id)_audioURLWithName:(id)a0 bundle:(id)a1;
+ (id)playSoundFileNamed:(id)a0 atPosition:(struct CGPoint { double x0; double x1; })a1 waitForCompletion:(BOOL)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)reversedAction;

@end
