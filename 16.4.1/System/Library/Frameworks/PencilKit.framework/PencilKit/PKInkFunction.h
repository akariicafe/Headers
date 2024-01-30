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

- (id)description;
- (void).cxx_destruct;
- (id)initWithInputPoints:(id)a0 outputPoints:(id)a1 functionType:(unsigned long long)a2;
- (id)initWithProperty:(unsigned long long)a0 input:(unsigned long long)a1 inputMask:(unsigned long long)a2 deviceMask:(unsigned long long)a3 inputPoints:(id)a4 minOutputPoints:(id)a5 maxOutputPoints:(id)a6 outputPoints:(id)a7 controlPoints:(id)a8 functionType:(unsigned long long)a9;
- (double)solveForInput:(double)a0;

@end
