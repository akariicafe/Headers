@class TCXmlPrefixStreamWriter, OCXWriteState;

@interface PXAnimationWriteState : NSObject {
    unsigned long long mCommonTimeNodeDataId;
    BOOL mHasMainSeqTimeNodeId;
    unsigned long long mMainSeqTimeNodeId;
}

@property (retain, nonatomic) OCXWriteState *writeState;
@property (retain, nonatomic) TCXmlPrefixStreamWriter *file;

- (void).cxx_destruct;
- (BOOL)hasMainSeqTimeNodeId;
- (id)initWithWriteState:(id)a0 file:(id)a1;
- (unsigned long long)mainSeqTimeNodeId;
- (unsigned long long)newCommonTimeNodeDataId;
- (void)setMainSeqTimeNodeId:(unsigned long long)a0;

@end
