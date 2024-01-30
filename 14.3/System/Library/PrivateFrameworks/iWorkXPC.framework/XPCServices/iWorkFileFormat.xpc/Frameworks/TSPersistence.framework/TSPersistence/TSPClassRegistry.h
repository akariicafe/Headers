@class NSString, NSMutableDictionary;

@interface TSPClassRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_registry;
    BOOL _didFinishRegistration;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (void)registerClass:(Class)a0 forExtensionNumber:(int)a1;
- (Class)classForMessage:(const struct Message { void /* function */ **x0; } *)a0;
- (Class)p_classForExtensionNumber:(int)a0;
- (Class)classForExtensionNumber:(int)a0;

@end
