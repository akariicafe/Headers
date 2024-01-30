@class NSString;

@interface MRTextInputMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) NSString *text;

- (id)initWithActionType:(unsigned long long)a0 text:(id)a1;
- (unsigned long long)type;

@end
