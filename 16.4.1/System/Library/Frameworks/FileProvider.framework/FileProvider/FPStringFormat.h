@class NSString, NSArray;

@interface FPStringFormat : NSObject

@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSArray *keyPaths;
@property (readonly) unsigned long long length;

+ (id)formatForPlistObject:(id)a0 localizationLookup:(id)a1;
+ (id)formatForStringFormatDict:(id)a0 localizationLookup:(id)a1;

- (void).cxx_destruct;
- (id)evaluateWithValuesByName:(id)a0 error:(id *)a1;

@end
