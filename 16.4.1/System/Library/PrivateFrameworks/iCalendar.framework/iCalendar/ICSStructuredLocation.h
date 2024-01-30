@class NSString, NSData;

@interface ICSStructuredLocation : ICSProperty

@property (retain, nonatomic) NSString *fmtype;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *loctype;
@property (retain, nonatomic) NSString *abURLString;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) double radius;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *address;
@property (retain, nonatomic) NSString *routing;

- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;
- (id)parametersToObscure;
- (id)propertiesToHide;
- (id)propertiesToObscure;
- (BOOL)shouldObscureValue;

@end
