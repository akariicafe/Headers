@class NSMutableArray;

@interface PKInkFunction : NSObject

@property (nonatomic) unsigned long long inkProperty;
@property (nonatomic) unsigned long long inkInput;
@property (nonatomic) unsigned long long inputMask;
@property (nonatomic) unsigned long long deviceMask;
@property (retain, nonatomic) NSMutableArray *inputPoints;
@property (retain, nonatomic) NSMutableArray *minOutputPoints;
@property (retain, nonatomic) NSMutableArray *maxOutputPoints;
@property (retain, nonatomic) NSMutableArray *outputPoints;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) NSMutableArray *controlPoints;

+ (id)inkFunctionForProperty:(unsigned long long)a0 input:(unsigned long long)a1 inputMask:(unsigned long long)a2 deviceMask:(unsigned long long)a3 inputPoints:(id)a4 outputPoints:(id)a5 functionType:(unsigned long long)a6;
+ (id)inkFunctionForProperty:(unsigned long long)a0 input:(unsigned long long)a1 inputMask:(unsigned long long)a2 deviceMask:(unsigned long long)a3 inputPoints:(id)a4 minOutputPoints:(id)a5 maxOutputPoints:(id)a6 functionType:(unsigned long long)a7;

- (void).cxx_destruct;
- (id)description;
- (id)initWithProperty:(unsigned long long)a0 input:(unsigned long long)a1 inputMask:(unsigned long long)a2 deviceMask:(unsigned long long)a3 inputPoints:(id)a4 outputPoints:(id)a5 functionType:(unsigned long long)a6;
- (id)initWithProperty:(unsigned long long)a0 input:(unsigned long long)a1 inputMask:(unsigned long long)a2 deviceMask:(unsigned long long)a3 inputPoints:(id)a4 minOutputPoints:(id)a5 maxOutputPoints:(id)a6 functionType:(unsigned long long)a7;
- (id)initWithInputPoints:(id)a0 outputPoints:(id)a1 functionType:(unsigned long long)a2;

@end
