@class NSString, ACActivityDescriptor, ACActivityContent;

@interface ACActivityContentUpdate : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) ACActivityDescriptor *descriptor;
@property (readonly, copy, nonatomic) ACActivityContent *content;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 descriptor:(id)a1 state:(long long)a2 content:(id)a3;

@end
