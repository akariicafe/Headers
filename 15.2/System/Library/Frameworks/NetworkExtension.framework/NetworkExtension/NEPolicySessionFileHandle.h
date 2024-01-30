@class NSString;

@interface NEPolicySessionFileHandle : NEFileHandle

@property (readonly) NSString *name;

- (id)initFromDictionary:(id)a0;
- (id)initWithPolicySession:(id)a0 name:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPolicySession:(id)a0;
- (unsigned long long)type;
- (id)dictionary;

@end
