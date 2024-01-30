@class NSArray;

@interface VUIJSManagedArray : NSObject

@property (retain, nonatomic) id ownerObject;
@property (retain, nonatomic) NSArray *managedArray;

- (void).cxx_destruct;
- (void)dealloc;
- (id)jsValuesWithContext:(id)a0;
- (id)initWithArray:(id)a0 ownerObject:(id)a1;

@end
