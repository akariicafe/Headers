@class VMUClassInfo;

@interface VMURuntimeMetadataChunkInfo : NSObject {
    BOOL forMetaclass;
    unsigned int type;
    VMUClassInfo *owningClassInfo;
}

- (void).cxx_destruct;

@end
