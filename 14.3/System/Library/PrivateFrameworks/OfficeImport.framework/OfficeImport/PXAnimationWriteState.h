@class TCXmlPrefixStreamWriter, OCXWriteState;

@interface PXAnimationWriteState : NSObject {
    unsigned long long mCommonTimeNodeDataId;
    BOOL mHasMainSeqTimeNodeId;
    unsigned long long mMainSeqTimeNodeId;
}

@property (retain, nonatomic) OCXWriteState *writeState;
@property (retain, nonatomic) TCXmlPrefixStreamWriter *file;

- (void).cxx_destruct;
- (id)initWithWriteState:(id)a0 file:(id)a1;
- (unsigned long long)newCommonTimeNodeDataId;
- (BOOL)hasMainSeqTimeNodeId;
- (void)setMainSeqTimeNodeId:(unsigned long long)a0;
- (unsigned long long)mainSeqTimeNodeId;

@end
