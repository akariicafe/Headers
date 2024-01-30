@class NSString, CNMutableContact;

@interface ABPostalNameGroupItem : CNCardGroupItem

@property (retain, nonatomic) CNMutableContact *contact;
@property (nonatomic) SEL setter;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *property;
@property (copy, nonatomic) NSString *placeholder;

- (void).cxx_destruct;

@end
