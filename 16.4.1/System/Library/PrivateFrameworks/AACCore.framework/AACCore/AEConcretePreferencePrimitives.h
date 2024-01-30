@class NSString;

@interface AEConcretePreferencePrimitives : NSObject <AEPreferencePrimitives> {
    NSString *_domain;
}

- (void)setBool:(id)a0 forKey:(id)a1;
- (id)boolForKey:(id)a0;
- (void).cxx_destruct;

@end
