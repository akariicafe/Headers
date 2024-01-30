@class NSString;

@interface _RKResponse : NSObject

@property (readonly) NSString *speechAct;
@property (readonly) NSString *headword;
@property (readonly) NSString *text;
@property (readonly) unsigned long long type;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSpeechAct:(id)a0 headword:(id)a1 text:(id)a2;

@end
