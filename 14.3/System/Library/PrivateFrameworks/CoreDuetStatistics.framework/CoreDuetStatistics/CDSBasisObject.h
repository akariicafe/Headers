@class NSString, NSDate;

@interface CDSBasisObject : NSObject

@property (nonatomic) unsigned long long localTime;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *basisValueString;
@property (nonatomic) unsigned long long basisUint64Value;
@property (nonatomic) double basisDoubleValue;
@property (nonatomic) BOOL risingEdge;
@property (nonatomic) BOOL fallingEdge;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long attributeId;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)initWithLocalTime:(unsigned long long)a0 creationDate:(id)a1 basisValueString:(id)a2 basisUint64Value:(unsigned long long)a3 basisDoubleValue:(double)a4 risingEdge:(BOOL)a5 fallingEdge:(BOOL)a6 duration:(double)a7 attributeId:(unsigned long long)a8 type:(long long)a9;

@end
