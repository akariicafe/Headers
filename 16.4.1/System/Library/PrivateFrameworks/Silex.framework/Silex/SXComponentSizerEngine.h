@class NSString, SXComponentTypeMatching;

@interface SXComponentSizerEngine : NSObject <SXComponentSizerEngine>

@property (readonly, nonatomic) SXComponentTypeMatching *factoryMatching;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addFactory:(id)a0;
- (void)removeFactory:(id)a0;
- (id)sizerForComponent:(id)a0 componentLayout:(id)a1 layoutOptions:(id)a2 DOMObjectProvider:(id)a3;

@end
