@interface CNVCardInstantMessagingLineGenerator : CNVCardLineGenerator

+ (id)instantMessageUsernameWithSchemeForUsername:(id)a0 service:(id)a1;
+ (id)serviceTypeStringForInstantMessageService:(id)a0;

- (id)lineWithValue:(id)a0 label:(id)a1;
- (id)makeLineWithName:(id)a0 value:(id)a1;
- (id)standardLabelsForLabel:(id)a0;

@end
