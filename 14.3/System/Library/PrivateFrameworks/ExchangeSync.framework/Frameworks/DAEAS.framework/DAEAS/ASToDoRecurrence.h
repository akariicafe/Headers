@class NSDate, NSNumber, ASToDo;

@interface ASToDoRecurrence : ASRecurrence <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) ASToDo *parentToDo;
@property (retain, nonatomic) NSDate *startTime;
@property (retain, nonatomic) NSNumber *regenerate;
@property (retain, nonatomic) NSNumber *deadOccur;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)parseASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 account:(id)a5;
- (void)appendActiveSyncDataForTask:(id)a0 toWBXMLData:(id)a1;
- (id)initWithParentToDo:(id)a0;
- (void)setUntilString:(id)a0;
- (void)setStartTimeString:(id)a0;
- (id)initWithCalRecurrence:(void *)a0 parentToDo:(id)a1;
- (void)saveToCalendarWithParentASToDo:(id)a0 existingRecord:(void *)a1 shouldMergeProperties:(BOOL)a2 outMergeDidChooseLocalProperties:(BOOL *)a3;
- (BOOL)_requiresParentEvent;
- (id)_untilDateForCalFrameworkWithParentStartDate:(id)a0;
- (id)_transformedUntilDateForActiveSync:(id)a0;

@end
