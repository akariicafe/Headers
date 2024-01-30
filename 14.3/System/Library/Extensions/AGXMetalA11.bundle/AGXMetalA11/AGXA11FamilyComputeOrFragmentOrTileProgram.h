@class AGXA11FamilyComputeProgram, AGXA11FamilyFragmentProgram;

@interface AGXA11FamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXA11FamilyComputeProgram *_compute;
    AGXA11FamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
