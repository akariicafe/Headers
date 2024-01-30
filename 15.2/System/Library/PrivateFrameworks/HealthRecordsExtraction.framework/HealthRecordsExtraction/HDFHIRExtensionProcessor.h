@class NSArray, NSString, HDFHIRResourceObject, NSMutableArray;

@interface HDFHIRExtensionProcessor : NSObject <HKJSONVisitorDelegate>

@property (retain, nonatomic) NSArray *collectedUnsupportedModifierExtensions;
@property (retain, nonatomic) NSMutableArray *collectingUnsupportedModifierExtensions;
@property (readonly, copy, nonatomic) HDFHIRResourceObject *resource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isSupportedModifierExtension:(id)a0;
+ (id)extensionsForURL:(id)a0 inJSONDictionary:(id)a1 error:(id *)a2;

- (id)initWithResource:(id)a0;
- (long long)visitor:(id)a0 willVisitArray:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)findUnsupportedModifierExtensions:(id *)a0;

@end
