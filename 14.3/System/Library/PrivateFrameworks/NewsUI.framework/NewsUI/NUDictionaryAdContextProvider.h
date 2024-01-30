@class NSDictionary, NSString;

@interface NUDictionaryAdContextProvider : NSObject <NUAdContextProvider>

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)adContextValueForKeyPath:(id)a0;

@end
