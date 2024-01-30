@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;

@end
