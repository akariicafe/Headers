@interface StitchedRegionDAG : MPSKernelDAGObject {
    void *_placeholderOpToUsesInStitchedRegionMap;
    void *_placeholdersInDAG;
}

- (void)dealloc;

@end
