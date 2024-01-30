@class NSArray, NSString;

@interface BMEventBase : NSObject <BMStreamValidating>

@property (class, readonly) NSArray *columns;
@property (class, readonly) NSArray *validKeyPaths;

@property (copy, nonatomic) NSArray *_validators;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)json;
- (id)valueForKeyPath:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isValidWithContext:(id)a0 error:(id *)a1;
- (id)init;
- (id)jsonDictionary;
- (BOOL)isCompleteWithContext:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
