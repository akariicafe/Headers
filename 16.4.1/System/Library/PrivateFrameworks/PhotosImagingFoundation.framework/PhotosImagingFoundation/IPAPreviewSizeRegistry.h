@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)initWithName:(id)a0;
- (id)debugDescription;
- (void)addPolicy:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
