@class AVAudioFormat, NSArray, NSMutableArray;

@interface ATSpatialStreamDescriptions : NSObject {
    NSMutableArray *_streamParameters;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) AVAudioFormat *flatFormat;
@property (readonly, nonatomic) AVAudioFormat *streamFormat;
@property (readonly, nonatomic) NSArray *streamParameters;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithFlatIOFormat:(id)a0 type:(long long)a1;

@end
