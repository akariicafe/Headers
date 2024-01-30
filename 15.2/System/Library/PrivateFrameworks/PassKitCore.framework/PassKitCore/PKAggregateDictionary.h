@class NSString;

@interface PKAggregateDictionary : NSObject <PKAggregateDictionaryProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDictionary;

- (void)addValueForScalarKey:(id)a0 value:(long long)a1;

@end
