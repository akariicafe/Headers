@interface VSRecognitionResult : NSObject

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)a0 classIdentifiers:(id)a1 values:(id)a2;

- (id)init;
- (id)modelIdentifier;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (long long)elementCount;
- (id)description;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)createHandler;
- (void)setRecognitionAction:(id)a0;
- (BOOL)getElementClassIdentifier:(id *)a0 value:(id *)a1 atIndex:(long long)a2;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)a0 withValue:(id)a1;
- (id)valueOfFirstElementWithClassIdentifier:(id)a0;
- (id)recognitionAction;

@end
