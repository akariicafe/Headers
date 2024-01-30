@class NSString, CKObjCType, NSMethodSignature;

@interface CKObjCProperty : NSObject

@property (readonly, nonatomic) Class classHandle;
@property (readonly, nonatomic) CKObjCType *type;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) SEL getterSelector;
@property (readonly, nonatomic) NSString *getterSelectorName;
@property (readonly, nonatomic) NSMethodSignature *getterMethodSignature;
@property (readonly, nonatomic) SEL setterSelector;
@property (readonly, nonatomic) NSString *setterSelectorName;
@property (readonly, nonatomic) NSMethodSignature *setterMethodSignature;
@property (readonly, nonatomic) NSString *instanceVariableName;

- (long long)compareToProperty:(id)a0;
- (void).cxx_destruct;
- (id)getFromObject:(id)a0;
- (void)setValue:(id)a0 onObject:(id)a1;
- (long long)compare:(id)a0;
- (id)description;
- (id)initWithClass:(Class)a0 property:(struct objc_property { } *)a1;

@end
