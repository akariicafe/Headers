@class NSSet, NSString;

@interface CoreDAVExpandProperty : NSObject

@property (retain, nonatomic) NSSet *propertiesToFind;
@property (retain, nonatomic) NSString *expandedName;
@property (retain, nonatomic) NSString *expandedNameSpace;

- (void).cxx_destruct;
- (id)initWithPropertiesToFind:(id)a0 expandedName:(id)a1 expandedNameSpace:(id)a2;

@end
