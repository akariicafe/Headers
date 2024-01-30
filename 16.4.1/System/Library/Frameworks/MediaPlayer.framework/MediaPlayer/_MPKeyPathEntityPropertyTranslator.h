@class NSArray, NSString;

@interface _MPKeyPathEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator>

@property (readonly, nonatomic) NSArray *sourceKeyPaths;
@property (readonly, nonatomic) id /* block */ valueTransformBlock;
@property (readonly, nonatomic) void /* function */ *valueTransformFunction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)translatorForKeyPaths:(id)a0 valueTransformBlock:(id /* block */)a1;
+ (id)translatorForKeyPaths:(id)a0 valueTransformFunction:(void /* function */ *)a1;

- (void).cxx_destruct;
- (id)valueFromSource:(id)a0 context:(id)a1;

@end
