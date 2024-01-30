@class NSString;

@interface MRTextInputMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned long long actionType;
@property (readonly, nonatomic) NSString *text;

- (unsigned long long)type;
- (id)initWithActionType:(unsigned long long)a0 text:(id)a1;

@end
