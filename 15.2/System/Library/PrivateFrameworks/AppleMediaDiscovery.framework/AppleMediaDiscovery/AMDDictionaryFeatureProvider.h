@class NSString, NSMutableDictionary;

@interface AMDDictionaryFeatureProvider : NSObject <AMDFeatureProvider>

@property (retain, nonatomic) NSMutableDictionary *features;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
