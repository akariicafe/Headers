@class NSNumber, NSString, NSDictionary;

@interface CHIPPluginClusterDescription : HMFObject

@property (readonly) Class clusterClass;
@property (readonly) SEL clusterSelector;
@property (copy, nonatomic) id /* block */ mapValue;
@property (retain, nonatomic) NSNumber *primaryArgIndex;
@property (retain, nonatomic) id primaryArg;
@property (retain, nonatomic) NSString *primaryArgType;
@property (retain, nonatomic) NSDictionary *arguments;

- (void).cxx_destruct;
- (id)initWithClass:(id)a0 selectorString:(id)a1;

@end
