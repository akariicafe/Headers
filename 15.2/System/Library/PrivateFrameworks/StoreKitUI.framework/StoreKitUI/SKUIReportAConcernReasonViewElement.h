@class NSNumber, NSString;

@interface SKUIReportAConcernReasonViewElement : SKUIViewElement

@property (readonly, copy, nonatomic) NSNumber *reasonID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *uppercaseName;

- (void).cxx_destruct;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
