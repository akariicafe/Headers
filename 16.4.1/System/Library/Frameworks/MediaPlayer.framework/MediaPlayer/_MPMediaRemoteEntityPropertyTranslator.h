@class NSString;

@interface _MPMediaRemoteEntityPropertyTranslator : NSObject <MPEntityPropertyTranslator>

@property (readonly, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) id /* block */ valueTransformBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)translatorWithBlock:(id /* block */)a0;
+ (id)translatorWithKeyPath:(id)a0;

- (void).cxx_destruct;
- (id)valueFromSource:(id)a0 context:(id)a1;

@end
