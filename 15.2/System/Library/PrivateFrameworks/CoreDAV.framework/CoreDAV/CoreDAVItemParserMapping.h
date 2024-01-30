@class NSString;

@interface CoreDAVItemParserMapping : NSObject

@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) Class parseClass;

- (id)description;
- (void).cxx_destruct;
- (id)initWithNameSpace:(id)a0 name:(id)a1 parseClass:(Class)a2;

@end
