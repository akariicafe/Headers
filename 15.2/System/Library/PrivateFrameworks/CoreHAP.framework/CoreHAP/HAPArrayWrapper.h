@class NSArray;

@interface HAPArrayWrapper : HAPFieldWrapper

@property (retain, nonatomic) NSArray *field;
@property (copy, nonatomic) id /* block */ objectCreator;

+ (id)wrappertlv:(unsigned long long)a0 name:(id)a1 objectCreator:(id /* block */)a2;

- (void).cxx_destruct;

@end
