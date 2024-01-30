@class NSUUID;

@interface HAPUUIDWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSUUID *field;

+ (id)wrappertlv:(unsigned long long)a0 name:(id)a1;

- (void).cxx_destruct;

@end
