@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initFromDictionary:(id)a0;
- (id)description;
- (unsigned long long)type;
- (id)initWithPolicySession:(id)a0;
- (id)initWithPolicySession:(id)a0 name:(id)a1;

@end
