@class NSString;

@interface SXComponentMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)classForObject:(id)a0 specVersion:(id)a1;

@end
