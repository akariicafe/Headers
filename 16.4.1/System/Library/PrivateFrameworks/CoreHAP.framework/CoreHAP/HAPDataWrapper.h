@class NSData;

@interface HAPDataWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSData *field;

+ (id)wrappertlv:(unsigned long long)a0 name:(id)a1;

- (void).cxx_destruct;

@end
