@class VMUClassInfo;

@interface VMURuntimeMetadataChunkInfo : NSObject {
    BOOL isMetaclass;
    unsigned int type;
    VMUClassInfo *owningClassInfo;
}

- (void).cxx_destruct;

@end
