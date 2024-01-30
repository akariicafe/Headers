@class NSString, NSDictionary;

@interface SBEmitStudyLogSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;

- (long long)type;
- (void).cxx_destruct;
- (id)initWithStudyLogWithName:(id)a0 payload:(id)a1;

@end
