@class CNContactFormatter, HMHome;

@interface HFUserNameFormatter : NSFormatter

@property (readonly, nonatomic) CNContactFormatter *contactFormatter;
@property (nonatomic) unsigned long long style;
@property (readonly, nonatomic) HMHome *home;

+ (long long)_contactFormatterStyleForUserNameStyle:(unsigned long long)a0;

- (id)stringForObjectValue:(id)a0;
- (id)initWithHome:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
