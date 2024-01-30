@class NSString;

@interface IKCSSDeclarationTypeInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *name;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 name:(id)a1;

@end
