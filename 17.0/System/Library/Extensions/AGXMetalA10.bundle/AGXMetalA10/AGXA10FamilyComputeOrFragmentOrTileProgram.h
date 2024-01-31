@class AGXA10FamilyFragmentProgram, AGXA10FamilyComputeProgram;

@interface AGXA10FamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXA10FamilyComputeProgram *_compute;
    AGXA10FamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
