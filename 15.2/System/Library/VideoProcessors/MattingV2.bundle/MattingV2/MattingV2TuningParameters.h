@class NSString, NSDictionary;

@interface MattingV2TuningParameters : NSObject {
    NSDictionary *_tuningDictionaryForPortType;
}

@property (retain, nonatomic) NSString *portType;

- (id)initWithDefaults;
- (void).cxx_destruct;
- (id)initWithTuningDictionary:(id)a0;
- (id)getSemanticConfigurationsFor:(id)a0 mattingConfiguration:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; })a1;
- (id)parseSemanticConfiguration:(id)a0 semanticKey:(id)a1 mattingConfiguration:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; int x7; })a2;

@end
