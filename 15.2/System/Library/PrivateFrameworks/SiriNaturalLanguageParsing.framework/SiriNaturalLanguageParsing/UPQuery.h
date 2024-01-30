@class NSUUID, NSString, NSArray, NSDictionary;
@protocol SIRINLUSystemDialogAct, NSObject;

@interface UPQuery : NSObject {
    NSString *__utterance;
}

@property (readonly, copy) NSUUID *uuid;
@property (readonly, copy) NSString *utterance;
@property (copy) NSArray *tokens;
@property (copy) NSDictionary *embeddingsByToken;
@property (readonly, copy) NSArray *spans;
@property (readonly) id<SIRINLUSystemDialogAct, NSObject> dialogAct;

- (void).cxx_destruct;
- (id)initWithTokens:(id)a0 embeddingsByToken:(id)a1 spans:(id)a2 dialogAct:(id)a3;
- (void)enumerateSpansWithType:(unsigned long long)a0 block:(id /* block */)a1;

@end
