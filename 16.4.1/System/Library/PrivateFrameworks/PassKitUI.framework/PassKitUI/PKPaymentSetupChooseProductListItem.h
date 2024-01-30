@class NSString;

@interface PKPaymentSetupChooseProductListItem : NSObject <PKIdentifiable>

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 title:(id)a1 subtitle:(id)a2;

@end
