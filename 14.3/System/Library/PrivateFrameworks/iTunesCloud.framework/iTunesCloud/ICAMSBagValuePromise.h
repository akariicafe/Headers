@class NSString;

@interface ICAMSBagValuePromise : AMSPromise

@property (readonly, copy, nonatomic) NSString *bagKey;
@property (readonly, nonatomic) unsigned long long bagValueType;

- (void).cxx_destruct;
- (id)initWithBagKey:(id)a0 bagValueType:(unsigned long long)a1;

@end
