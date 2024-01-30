@class NSString;

@interface TFFeedbackEntry : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 identifier:(id)a1 title:(id)a2;

@end
