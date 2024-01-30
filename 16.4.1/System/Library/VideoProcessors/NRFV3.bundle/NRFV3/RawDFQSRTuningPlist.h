@class RawDFQSRTuningParams;

@interface RawDFQSRTuningPlist : NSObject {
    RawDFQSRTuningParams *quadraEV0Tuning;
    RawDFQSRTuningParams *quadraLongTuning;
}

- (void).cxx_destruct;
- (int)readPlist:(id)a0;

@end
