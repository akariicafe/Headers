@class NSString;

@interface ICAMSBagValuePromise : AMSPromise

@property (readonly, copy, nonatomic) NSString *bagKey;
@property (readonly, nonatomic) unsigned long long bagValueType;

- (id)initWithBagKey:(id)a0 bagValueType:(unsigned long long)a1;
- (void).cxx_destruct;

@end
