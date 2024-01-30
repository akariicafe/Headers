@class NSString;

@interface TFFeedbackEntryShortText : TFFeedbackEntry

@property (readonly, copy, nonatomic) NSString *placeholder;
@property (readonly, nonatomic) unsigned long long contentType;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 title:(id)a1 placeholder:(id)a2 contentType:(unsigned long long)a3;

@end
