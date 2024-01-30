@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (void)getStringRepresentation:(id /* block */)a0 withInput:(id)a1 parameters:(id)a2;
- (id)initWithDefinition:(id)a0;

@end
