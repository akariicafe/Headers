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
@property (readonly, nonatomic) BOOL isRobotResponse;
@property (readonly, nonatomic) NSDictionary *proactiveTrigger;
@property (readonly, nonatomic) BOOL isConfident;

- (id)description;
- (void).cxx_destruct;
- (void)setIsConfident:(BOOL)a0;
- (id)initWithProactiveTrigger:(id)a0 isConfident:(BOOL)a1;
- (id)initWithText:(id)a0 lang:(id)a1 replyTextId:(unsigned long long)a2 styleGroupId:(unsigned long long)a3 semanticClassId:(unsigned long long)a4 modelId:(unsigned long long)a5 categoryId:(unsigned long long)a6 isCustomResponse:(BOOL)a7 isRobotResponse:(BOOL)a8 isConfident:(BOOL)a9;
- (id)initWithText:(id)a0 lang:(id)a1 replyTextId:(unsigned long long)a2 styleGroupId:(unsigned long long)a3 semanticClassId:(unsigned long long)a4 modelId:(unsigned long long)a5 categoryId:(unsigned long long)a6 isCustomResponse:(BOOL)a7 isRobotResponse:(BOOL)a8 isConfident:(BOOL)a9 proactiveTrigger:(id)a10;

@end
