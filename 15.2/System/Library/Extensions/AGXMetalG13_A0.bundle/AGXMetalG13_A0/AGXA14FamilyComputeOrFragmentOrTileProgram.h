@class AGXA14FamilyFragmentProgram, AGXA14FamilyComputeProgram;

@interface AGXA14FamilyComputeOrFragmentOrTileProgram : NSObject {
    AGXA14FamilyComputeProgram *_compute;
    AGXA14FamilyFragmentProgram *_frag;
    id _tile;
}

- (void)dealloc;

@end
