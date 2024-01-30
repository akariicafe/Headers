@interface VSRecognitionResult : NSObject

+ (void)initialize;
+ (id)recognitionResultWithModelIdentifier:(id)a0 classIdentifiers:(id)a1 values:(id)a2;

- (id)modelIdentifier;
- (id)retain;
- (oneway void)release;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (unsigned long long)retainCount;
- (long long)elementCount;
- (id)createHandler;
- (BOOL)getElementClassIdentifier:(id *)a0 value:(id *)a1 atIndex:(long long)a2;
- (id)recognitionAction;
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)a0 withValue:(id)a1;
- (void)setRecognitionAction:(id)a0;
- (id)valueOfFirstElementWithClassIdentifier:(id)a0;

@end
