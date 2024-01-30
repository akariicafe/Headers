@class NSString, NSDictionary;

@interface SBEmitStudyLogSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;

- (void).cxx_destruct;
- (long long)type;
- (id)initWithStudyLogWithName:(id)a0 payload:(id)a1;

@end
