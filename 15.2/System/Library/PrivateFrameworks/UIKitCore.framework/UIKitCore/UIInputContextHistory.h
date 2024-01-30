@class NSSet, NSString, TIInputContextHistory;

@interface UIInputContextHistory : NSObject

@property (readonly, nonatomic) NSSet *senderIdentifiers;
@property (readonly, nonatomic) NSSet *recipientIdentifiers;
@property (readonly, nonatomic) NSSet *recipientNames;
@property (readonly, nonatomic) TIInputContextHistory *tiInputContextHistory;
@property (readonly, nonatomic) NSString *senderIdentifier;

- (void)updateRecipientNames:(id)a0;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifiers:(id)a1;
- (void)addTextEntry:(id)a0 timestamp:(id)a1;
- (id)initWithRecipientIdentifiers:(id)a0 senderIdentifier:(id)a1;
- (id)initWithRecipientIdentifiers:(id)a0;
- (void)addTextEntry:(id)a0 timestamp:(id)a1 senderIdentifier:(id)a2;
- (id)mostRecentTextEntries:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
