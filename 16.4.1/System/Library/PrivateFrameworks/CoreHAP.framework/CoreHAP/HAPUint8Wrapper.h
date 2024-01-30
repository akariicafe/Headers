@class NSNumber;

@interface HAPUint8Wrapper : HAPFieldWrapper

@property (retain, nonatomic) NSNumber *field;

+ (id)wrappertlv:(unsigned long long)a0 name:(id)a1;

- (void).cxx_destruct;

@end
