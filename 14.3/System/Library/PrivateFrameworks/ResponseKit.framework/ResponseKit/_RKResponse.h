@class NSString;

@interface _RKResponse : NSObject

@property (readonly) NSString *speechAct;
@property (readonly) NSString *headword;
@property (readonly) NSString *text;
@property (readonly) unsigned long long type;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithSpeechAct:(id)a0 headword:(id)a1 text:(id)a2;

@end
