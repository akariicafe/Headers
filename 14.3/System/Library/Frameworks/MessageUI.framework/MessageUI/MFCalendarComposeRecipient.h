@class NSString;

@interface MFCalendarComposeRecipient : MFComposeRecipient {
    NSString *_calAttendeeName;
    id _participant;
}

@property (retain, nonatomic) id participant;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithComposeRecipient:(id)a0;
- (void)setCalAttendeeName:(id)a0;
- (id)displayString;

@end
