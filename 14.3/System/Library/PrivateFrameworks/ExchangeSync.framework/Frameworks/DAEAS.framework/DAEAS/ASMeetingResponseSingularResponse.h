@class NSString, NSNumber;

@interface ASMeetingResponseSingularResponse : ASItem

@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSString *eventId;
@property (retain, nonatomic) NSString *instanceId;

+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)parsingLeafNode;
+ (BOOL)parsingWithSubItems;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (id)asParseRules;

- (void).cxx_destruct;
- (id)description;

@end
