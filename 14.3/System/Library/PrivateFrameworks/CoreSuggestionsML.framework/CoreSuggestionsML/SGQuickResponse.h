@class NSString, NSDictionary;

@interface SGQuickResponse : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *lang;
@property (readonly, nonatomic) unsigned long long replyTextId;
@property (readonly, nonatomic) unsigned long long styleGroupId;
@property (readonly, nonatomic) unsigned long long semanticClassId;
@property (readonly, nonatomic) unsigned long long modelId;
@property (readonly, nonatomic) unsigned long long categoryId;
@property (readonly, nonatomic) BOOL isCustomResponse;
@property (readonly, nonatomic) NSDictionary *proactiveTrigger;

- (void).cxx_destruct;
- (id)description;
- (id)initWithText:(id)a0 lang:(id)a1 replyTextId:(unsigned long long)a2 styleGroupId:(unsigned long long)a3 semanticClassId:(unsigned long long)a4 modelId:(unsigned long long)a5 categoryId:(unsigned long long)a6 isCustomResponse:(BOOL)a7;
- (id)initWithProactiveTrigger:(id)a0;
- (id)initWithText:(id)a0 lang:(id)a1 replyTextId:(unsigned long long)a2 styleGroupId:(unsigned long long)a3 semanticClassId:(unsigned long long)a4 modelId:(unsigned long long)a5 categoryId:(unsigned long long)a6 isCustomResponse:(BOOL)a7 proactiveTrigger:(id)a8;

@end
