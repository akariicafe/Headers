@class NSString;

@interface XRSchemaErrorReplacementElement : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *replacementString;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 key:(id)a1 replacementString:(id)a2;

@end
