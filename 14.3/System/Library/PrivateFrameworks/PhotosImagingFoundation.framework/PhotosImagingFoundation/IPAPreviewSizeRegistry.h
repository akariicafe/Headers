@class NSString, NSMutableDictionary;

@interface IPAPreviewSizeRegistry : NSObject {
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)init;
- (void).cxx_destruct;
- (void)addPolicy:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(id)a0;
- (id)policyForStyle:(unsigned long long)a0;
- (id)policyForStyleObject:(id)a0;

@end
