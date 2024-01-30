@class PVEffect, NSArray, NSMutableDictionary, NSString;

@interface MultiUpClip : MovieClip <CompoundClipInformation>

@property (nonatomic) int type;
@property (retain, nonatomic) NSArray *containedClips;
@property (readonly, nonatomic) PVEffect *multiUpEffect;
@property (retain, nonatomic) NSMutableDictionary *multiUpEffectSettings;
@property (retain, nonatomic) NSString *sequentialEffectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)movie;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)maxDuration;
- (void)setStartOffset:(int)a0;
- (void)setDuration:(int)a0;
- (id)initWithClip:(id)a0;
- (id)speedRanges;
- (BOOL)isMultiUp;
- (id)plistRepresentationFromProject:(id)a0;
- (void)setContentsFromPlist:(id)a0 inProject:(id)a1;
- (void)validateEffectRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 inProject:(id)a1;
- (BOOL)expandsEditList;

@end
