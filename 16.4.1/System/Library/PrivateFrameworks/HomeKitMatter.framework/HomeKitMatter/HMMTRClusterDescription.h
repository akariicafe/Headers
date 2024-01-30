@class NSNumber, NSString, NSDictionary;

@interface HMMTRClusterDescription : HMFObject

@property (readonly) Class clusterClass;
@property (readonly) SEL clusterSelector;
@property (copy, nonatomic) id /* block */ mapValue;
@property (retain, nonatomic) NSNumber *primaryArgIndex;
@property (retain, nonatomic) id primaryArg;
@property (retain, nonatomic) NSString *primaryArgType;
@property (retain, nonatomic) NSDictionary *arguments;
@property (retain, nonatomic) Class paramsClass;
@property (retain, nonatomic) NSNumber *paramsIndex;
@property (retain, nonatomic) NSDictionary *paramsArguments;
@property (copy, nonatomic) id /* block */ mapWriteValueToExpectedValues;
@property (nonatomic) BOOL syncWriteFunc;

- (void).cxx_destruct;
- (id)initWithClass:(id)a0 selectorString:(id)a1;

@end
